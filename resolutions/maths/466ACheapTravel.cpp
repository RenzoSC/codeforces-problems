#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    long long maxcost = n*a;
    long long result = maxcost;
    if(b < m*a){
        long long howmany = n/m;
        long long howleft = n %m;
        result = a*(howleft);
        result+=b*howmany;
        long long othersolution = b*(howmany+1);
        result = result < othersolution?result:othersolution;
    }
    cout<<result;
    return 0;
}