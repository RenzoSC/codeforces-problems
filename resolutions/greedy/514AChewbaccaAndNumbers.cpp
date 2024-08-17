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
    string number,min_inverted;
    cin>>number;
    min_inverted.resize(number.length());

    fore(i,0,number.length()){
        int char_ = number[i] - '0';
        if(i==0 and char_==9){
            min_inverted[i]= number[i];
            continue;
        }
        if(char_>4){
            min_inverted[i] = (9- char_) + '0';
        }else{
            min_inverted[i] = number[i];
        }
    }

    cout<<min_inverted;
    return 0;
}