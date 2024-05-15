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

vector<int>vecX = {1,-1};
vector<int>vecY = {1,-1};

bool isValidVec(ll newX, ll newY, ll row, ll col){
    if(newX<0)return false;
    if(newY<0)return false;
    if(newX>=row)return false;
    if(newY>= col) return false;
    return true;
}

void dfs(ll x, ll y, vector <vector<char>>  &g, vector <vector<bool>> &vis, ll row, ll col) {
    vis[x][y] = true;
    for (int i = 0; i < 2; i++)
    {
        if(isValidVec(x+vecX[i], y, row, col)){
            if(g[x+vecX[i]][y] == '.' && !vis[x + vecX[i]][y]){
                dfs(x+vecX[i], y, g, vis, row, col);
            }
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        if(isValidVec(x, y +vecY[i], row, col)){
            if(g[x][y+vecY[i]] == '.' && !vis[x][y +vecY[i]]){
                dfs(x, y +vecY[i], g, vis, row, col);
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m;
    cin>>n>>m;
    vector <vector<char>> g(n, vector<char>(m));
    vector <vector<bool>> vis(n,vector<bool>(m,false));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin>>g[i][j];
        }
        
    }
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if(g[i][j]=='.' && !vis[i][j]){
                dfs(i,j,g,vis, n, m);       
                count++;
            }
        }
        
    }
    cout<<count<<"\n";
    return 0;
}