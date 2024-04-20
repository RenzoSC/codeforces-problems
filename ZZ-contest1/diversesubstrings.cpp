#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t;
    cin>>t;
    for (long long x = 0; x < t; x++)
    {
        long long n, valid;
        string s;
        cin>>n;
        cin >> s;
        valid = 0;
        for (long long i = 0; i < n; i++)
        {
            vector <long long>ncount(10,0);
            long long maxcount=0;
            long long howmanychar=0;
            for (long long j = i; j < min(i+100,n); j++)
            {
                if(ncount[s[j]-'0']==0){
                    howmanychar++;
                }
                ncount[s[j]-'0']++;
                maxcount = max(ncount[s[j]-'0'],maxcount);
                if(maxcount <= howmanychar){
                    valid++;
                }
            }
        }
        cout<<valid<<'\n';
    }
    
    return 0;
}