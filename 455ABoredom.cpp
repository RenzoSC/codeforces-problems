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
    ll n;
    cin>>n;
    vector<ll> seq(n);
    ll a[100001] = {0};
    ll max_el=0;

    fore(i,0,n){
        ll el;
        cin>>el;
        seq[i]=el;
        a[el]++;
        max_el = max_el < el?el:max_el;
    }
    
    vector<ll>ans(max_el+2, 0);
    ans[0]=0;
    ans[1]=a[1];
    ans[seq[0]]= a[seq[0]]*seq[0];
    fore(i,2,max_el+1){
        ans[i]= max(a[i]*i + ans[i-2], ans[i-1]);
    }

    cout<<ans[max_el];

    return 0;
}