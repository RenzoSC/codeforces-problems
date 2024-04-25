#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long n, s;
    cin >>s>>n;
    vector <pair<long long, long long>> dragons;
    for (long long i = 0; i < n; i++)
    {
        long long strengh, bonus;
        cin>> strengh>>bonus;
        dragons.push_back({strengh,bonus});
    }
    
    sort(dragons.begin(), dragons.end());

    long long count = 0;

    for (long long i = 0; i < n; i++)
    {
        if(s>dragons[i].first){
            count++;
            s+= dragons[i].second;
        }
    }
    cout<<(count == n?"YES":"NO");
    return 0;
}