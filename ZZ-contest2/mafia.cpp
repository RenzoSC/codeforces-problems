#include <bits/stdc++.h>

using namespace std;

bool can(unsigned long long rounds, long long totalwants, long long howmanypeople){
    return rounds <= (howmanypeople*rounds -totalwants);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    cin>>n;
    long long total=0;
    long long maxim=0;
    for (long long i = 0; i < n; i++)
    {
        long long el;
        cin>>el;
        total+=el;
        maxim = max(maxim,el);
    }
    unsigned long long l,r,m;
    l = maxim;
    r = maxim*n;
    while (l<=r)
    {
        m = (l+r)/2;
        if(can(m, total, n)){
            r = m-1;
        }else{
            l = m+1;
        }
    }
    cout<<l;
    return 0;
}