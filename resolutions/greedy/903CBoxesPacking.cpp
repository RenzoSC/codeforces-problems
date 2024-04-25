#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int boxes;
    long long l;
    deque<pair<int,vector<int>>>large;
    cin>>boxes;
    for (int i = 0; i < boxes; i++)
    {
        cin>>l;
        vector<int> x;
        large.push_back({l,x});
    }
    
    sort(large.begin(),large.end());
    int final = boxes;
    for (int i = 0; i < boxes-1; i++)
    {
        bool entro = false;
        int x = i;
        int y = i+1;
        while (!entro && y < boxes)
        {
            if(large[x].first < large[y].first && large[y].second.size()==0){
                large[y].second.push_back(large[x].first);
                final-=1;
                entro=true;
            }else{
                y+=1;
            }
        }
    }
    cout<<final;
    return 0;
}