#include <bits/stdc++.h>

using namespace std;

//PASS TEST

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<long long>ordered;
    vector<long long>notordered;
    vector<long long>elements;
    notordered.push_back(0);
    ordered.push_back(0);
    long long n, m, e;
    std::cin>>n;
    for (size_t i = 0; i < n; i++)
    {   
        std::cin>>e;
        elements.push_back(e);
        notordered.push_back(notordered[i]+e);
    }
    long long question, x , y;
    sort(elements.begin(),elements.end());
    for (size_t j = 0; j < n; j++)
    {
        ordered.push_back(ordered[j]+elements[j]);
    }
    
    std::cin>>m;
    for (size_t i = 0; i < m; i++)
    {
        std::cin>>question>>x>>y;
        if(question == 1){
            std::cout<< notordered[y] - notordered[x-1]<<'\n';
        }else{
            std::cout << ordered[y] - ordered[x-1]<<'\n';
        }
    }
    return 0;
}