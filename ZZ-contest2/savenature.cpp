#include <bits/stdc++.h>

using namespace std;

bool can(long long x, long long a, long long y, long long b, long long ntickets, vector <long long> tickets, unsigned long long esp){
    unsigned long long totalgan = 0;

    long long cxy = 0;
    long long cx = 0;
    long long cy = 0;
    for (long long i = 1; i <= ntickets; i++)
    {
        if(i%a == 0 && i%b ==0){
            cxy++;
        }else if(i%a == 0){
            cx++;
        }else if(i%b == 0){
            cy++;
        }
    }
    for (long long  i = 0; i < cxy; ++i){
        totalgan += tickets[i] * (x+y);
    }
    for (long long  i = 0; i < cx; ++i){
        totalgan += tickets[cxy+i]*x;
    }
    for (long long  i = 0; i < cy; ++i){
        totalgan += tickets[cxy+cx+i]*y;
    }
    //cout<<totalgan<<"\n";
    return totalgan >= esp;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin>>n;
        vector <long long> tickets(n);
        for (int j = 0; j < n; j++)
        {
            unsigned long long el;
            cin>>el;
            tickets[j] = el /100;            
        }
        int x, a, y, b;
        cin>>x>>a>>y>>b;
        if(x<y){
            swap(a,b);
            swap(x,y);
        }

        unsigned long long k;
        cin>>k;
        sort(tickets.begin(), tickets.end(), greater<long long>());
        long long l,r,m;
        l= 0;
        r= n+1;
        while ((r-l)>1)
        {
            m=(l+r)/2;
            if(can(x,a,y,b, m, tickets, k)){
                r=m;
            }else{
                l=m;
            }
            //cout<<"l :"<<l<<"r : "<<r<<"\n";
        }
        cout<<(r>n?-1:r)<<"\n";
    }
    
    return 0;
}