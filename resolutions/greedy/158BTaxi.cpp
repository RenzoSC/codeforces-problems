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
    ll n;
    cin>>n;
    map<ll,ll> grupos_map;
    grupos_map[1]=0;
    grupos_map[2]=0;
    grupos_map[3]=0;
    grupos_map[4]=0;
    fore(i,0,n){
        int s;
        cin>>s;
        grupos_map[s]++;
    }

    //cout<<"grupor 4 -> "<< grupos_map[4]<<"grupor 3 -> "<< grupos_map[3]<<"grupor 2 -> "<< grupos_map[2]<<"grupor 1 -> "<< grupos_map[1]<<"\n";

    ll taxis=0;

    taxis+= grupos_map[4];
    
    if(grupos_map[3]>0){
        taxis+= grupos_map[3];
        grupos_map[1] = grupos_map[1]<grupos_map[3]? 0 : grupos_map[1]-grupos_map[3];
    }

    int left_2=0;
    if (grupos_map[2]>0){
        taxis += (grupos_map[2]*2)/4;
        if ((grupos_map[2]*2) % 4 !=0){
            left_2=(grupos_map[2]*2)%4;
        }
    }
    //cout<<" 2  ----> "<<taxis<<"\n";
    int left_1=0;

    if (grupos_map[1]>0){
        taxis += grupos_map[1]/4;
        if(grupos_map[1]%4 !=0 ){
            left_1 = grupos_map[1]%4;
        }
    }

    //cout<<" 1  ----> "<<taxis<<"\n";

    if (left_1 + left_2 >4){
        taxis+=2;    
    }else{
        taxis+= left_1 + left_2 ==0?0:1;
    }
    cout<<taxis;
    return 0;
}