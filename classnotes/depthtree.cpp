#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
ll INF = 1e18;

void dfs(ll v, vector<vector<ll>> &g, vector<bool> &vis, vector<ll> &depth) {
    vis[v] = true;
    for (ll u : g[v]) {
        if (!vis[u]) {
            depth[u]= depth[v]+1;
            dfs(u, g, vis, depth);
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,r;
    cin>>n>>r;
    vector<vector<ll>> g(n);
    vector<bool>vis(n,false);
    for (ll i = 0; i < n-1; i++)
    {
        ll h1,h2;
        cin>>h1>>h2;
        g[h1-1].push_back(h2-1);
        g[h2-1].push_back(h1-1);
    }
    vector <ll>depth(n);
    depth[r-1]=0;
    dfs(r-1,g,vis,depth);
    for (ll i = 0; i < n; i++)
    {
        cout<<depth[i]<<" ";
    }
    return 0;
}