#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t;
    cin>>t;
    for (long long i = 0; i < t; i++)
    {
        long long n;
        cin>>n;
        vector<long long>a;
        set <long long> seta;
        for (long long x = 0; x < n; x++)
        {
            long long el;
            cin>>el;
            seta.emplace(el);
        }
        
        for(long long x: seta){
            a.push_back(x);
        }
        long long longa = a.size();
        long long res = 1;
        long long current = 0;
        long long l,r;
        l = r = 0;
        while (l < longa && r < longa)
        {
            if(l==r){
                if(a[l]>=n){
                    r++;
                }else{
                    current = r+1-l;
                    res = res<current?current:res;
                    r++;
                }
            }else{
                //cout << "a[r] = "<<a[r]<<" a[l] = "<<a[l]<<"\n";
                if(a[r]-a[l]>=n){
                    l++;
                }else{
                    current = r+1-l;
                    res = res<current?current:res;
                    r++;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}