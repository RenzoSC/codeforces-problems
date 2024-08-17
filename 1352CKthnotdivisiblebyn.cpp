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

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ll t,n,k;

    cin>>t;
    fore(i,0,t){
        cin>>n>>k;
        ll brecha = n-1;
        ll saltos = k/brecha;
        ll sobrante = k % brecha;
        cout<< (sobrante == 0? (n * saltos) -1 : n * saltos + sobrante)<<"\n";
    }
    return 0;
}