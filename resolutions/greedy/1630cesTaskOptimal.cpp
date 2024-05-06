#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    cin>>n;
    vector <pair<long long, long long>>tasks;
    for (long long i = 0; i < n; i++)
    {
        long long dur, ded;
        cin>>dur>>ded;
        tasks.push_back({dur,ded});
    }
    
    sort(tasks.begin(), tasks.end());

    long long mytime=0;
    long long reward=0;
    for (long long i = 0; i < n; i++)
    {
        mytime+=tasks[i].first;
        reward+=tasks[i].second - mytime;
    }
    cout<<reward;
    return 0;
}