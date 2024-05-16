#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;
ll INF = 1e18;

void dfs(ll v, vector<vector<ll>> &g, vector<bool> &vis, vector<ll> &subordinates) {
    vis[v] = true;
    for (ll u : g[v]) {
        if (!vis[u]) {
            subordinates[v]+=1;
            dfs(u, g, vis, subordinates);
            subordinates[v]+= subordinates[u];
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n;
    cin>>n;
    vector<vector<ll>> g(n);
    vector<bool>vis(n,false);
    for (ll i = 0; i < n-1; i++)
    {
        ll h1;
        cin>>h1;
        g[h1-1].push_back(i+1);
    }
    vector <ll>subordinates(n);
    subordinates[0]=0;
    dfs(0,g,vis,subordinates);
    for (ll i = 0; i < n; i++)
    {
        cout<<subordinates[i]<<" ";
    }
    return 0;
}