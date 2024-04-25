#include <bits/stdc++.h>

using namespace std;

bool check(vector<long long>delivery, vector<long long>takeaway, long long time, long long dishes){
    long long remaintime = time;
    long long remaindishes = dishes;
    //iterar sobre las diferentes opciones, en el caso de delivery ver si le tomaría más tiempo tomar delivery o la suma de takeaway?
    return false;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t;
    for (long long x = 0; x < t; x++)
    {
        long long dishes, maxim;
        maxim = 0;
        vector<long long>delivery(dishes);
        vector<long long>takeaway(dishes);
        cin>>dishes;
        
        for (long long  u = 0; u < dishes; u++)
        {
            cin>>delivery[u];
            maxim = max(maxim, delivery[u]); 
        }
        
        long long sumtakeaway = 0;
        for (long long  u = 0; u < dishes; u++)
        {
            cin>>takeaway[u];
            sumtakeaway += takeaway[u]; 
        }
        maxim = max(maxim,sumtakeaway);

        long long l,r,m;
        l = 1;
        r = maxim*2;
        while (l<=r)
        {
            m = (l+r)/2;
            if(check(delivery,takeaway,m,dishes)){
                r = m-1;
            }else{
                l = m+1;
            }
        }
        cout<<l<<"\n";
    }
    
    return 0;
}