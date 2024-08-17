#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

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


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector <vector<ll>> g(n);
    vector <bool> vis(n,false);
    for (ll i = 0; i < m; i++)
    {
        ll node, vec;
        cin>> node>>vec;
        g[node-1].push_back(vec-1);
        g[vec-1].push_back(node-1);
    }
    pair <ll,ll> v = {0,1};
    queue<pair <ll,ll> > q;
    
    vector <pair <ll,ll> > path(n);
    vis[v.first] = true;
    q.push(v);
    path[v.first] = {-1,1};
    bool founded =false;
    while (!q.empty()) {
        v = q.front();
        q.pop();
        for (ll u : g[v.first]) {
            if (!vis[u]) {
                vis[u] = true;
                ll nivel = v.second+1;
                q.push({u,nivel});
                path[u] = {v.first, nivel};
                if(u==n-1){
                    founded = true;
                    break;
                }
            }
        }
        if(founded){
            break;
        }
    }
    if(founded){
        bool end = false;
        ll giter = n-1;
        vector <ll> endpath;
        while (!end)
        {
            endpath.push_back(giter);
            giter = path[giter].first;
            if(giter == -1){
                end=true;
            }
        }
        reverse(endpath.begin(), endpath.end());
        cout<<path[n-1].second -1<<"\n";
        for(ll x : endpath){
            cout<<x+1<<" ";
        }
    }else{
        cout<<"IMPOSSIBLE";
    }
    return 0;
}