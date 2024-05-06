#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, count;
    count = 0;
    cin>>n;
    vector <pair<long long, long long>> movies;
    for (long long i = 0; i < n; i++)
    {
        long long start,end;
        cin>> start>>end;
        movies.push_back({end,start});
    }
    sort(movies.begin(), movies.end());
    long long myhour = 0;
    for (long long i = 0; i < n; i++)
    {
        if(myhour <= movies[i].second){
            myhour = movies[i].first;
            count++;
        }
    }
        
    cout<<count;
    return 0;
}