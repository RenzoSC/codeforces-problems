#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<int> vi;
typedef vector<ll> vl;
ll INF = 1e18;
#define MAXN 100005
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define fore(i,a,b) for(ll i=a,to=b;i<to;++i)


void bfs(ll v, vector<vector<ll>> &g, vector<bool> &vis) {
    queue<ll> q;
    vis[v] = true;
    q.push(v);
    while (!q.empty()) {
        v = q.front();
        q.pop();
        for (ll u : g[v]) {
            if (!vis[u]) {
                vis[u] = true;
                q.push(u);
            }
        }
    }
}

void dfs(ll v, vector<vector<ll>> &g, vector<bool> &vis) {
    vis[v] = true;
    for (ll u : g[v]) {
        if (!vis[u]) {
            dfs(u, g, vis);
        }
    }
}

vector<ll> dijkstra(ll start, vector<vector<ii>> &g) {
    vector<ll> dist(sizeof(g), INF);
    dist[start] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, start});
    while (!pq.empty()) {
        auto [d_v, v] = pq.top();
        pq.pop();
        if (d_v != dist[v])
            continue;
        for(auto[to,len]:g[v]){
            dist[to]= dist[v]+len;
            pq.push({dist[to], to});
        }
    }
    return dist;
}

int uf[MAXN];
void uf_init(){memset(uf,-1,sizeof(uf));}
int uf_find(int x){return uf[x]<0?x:uf[x]=uf_find(uf[x]);}
int uf_size(int x){return -uf[uf_find(x)];}
bool uf_join(int x, int y){
	x=uf_find(x);y=uf_find(y);
	if(x==y)return false;
	if(uf[x]>uf[y])swap(x,y);
	uf[x]+=uf[y];uf[y]=x;
	return true;
}

vector<pair<ll,pair<int,int> > > es; // edges (cost,(u,v))
ll kruskal(){  // assumes graph is connected
	sort(es.begin(),es.end());uf_init();
	ll r=0;
	fore(i,0,es.size()){
		int x=es[i].snd.fst,y=es[i].snd.snd;
		if(uf_join(x,y))r+=es[i].fst; // (x,y,c) belongs to mst
	}
	return r; // total cost
}

vl topoSort(const vector<vl>& gr) {
	vl indeg(gr.size()), ret;
	for (auto& li : gr) for (ll x : li) indeg[x]++;
	queue<ll> q; // use priority_queue for lexic. largest ans.
	fore(i,0,gr.size()) if (indeg[i] == 0) q.push(i);
	while (!q.empty()) {
		ll i = q.front(); // top() for priority queue
		ret.push_back(i);
		q.pop();
		for (ll x : gr[i])
			if (--indeg[x] == 0) q.push(x);
	}
	return ret;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector<vl>g(n);
    fore(i,0,m){
        ll x,y;
        cin>>x>>y;
        x--;y--;
        g[x].pb(y);
    }
    vl topo;
    topo = topoSort(g);
    vl dp_dist(n+10);
    // for(ll node :topo){
    //     cout<<node+1 <<" ";
    // }
    // cout<<"\n";
    dp_dist[topo[0]]= 0;
    ll maxdist = 0;
    for(ll node:topo){
        for(ll children:g[node]){
            dp_dist[children] = max(dp_dist[children], dp_dist[node]+1);
            maxdist = max(maxdist, dp_dist[children]);
        }
    }
    cout<<maxdist;
    return 0;
}