#include <bits/stdc++.h>

using namespace std;

bool customCompare(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int teams, k, p,t;
    cin>>teams>>k;
    vector <pair<int,int>> contest;
    map <pair<int,int>,int>frequency;
    for (int i = 0; i < teams; i++)
    {
        cin>>p>>t;
        if(frequency.count({p,t})){
            frequency[{p,t}]+=1;
        }else{
            frequency[{p,t}]=1;
        }
        contest.push_back({p,t});
    }
    sort(contest.begin(), contest.end(), customCompare);
    cout<<frequency[contest[k-1]];
    return 0;
}