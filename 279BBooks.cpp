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

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n);

    fore(i,0,n){
        ll book;
        cin>>book;
        a[i]=book;
    }

    ll p1 = 0;
    ll acum = 0;
    ll ans = 0;
    
    fore(i,0,n){
        while (p1 < n && acum + a[p1] <= t) {
            acum += a[p1];
            ++p1;
        }
        ans = max(ans, p1 - i);
        acum -= a[i];
    }

    cout << ans << '\n';

    return 0;
}