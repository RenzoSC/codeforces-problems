#include <bits/stdc++.h>
     
using namespace std;
     
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    vector<int> aux;
    int n, k, num, min, ii,jj;
    std::cin >>n>>k;
    aux.push_back(0);
    for (size_t i = 0; i < n; i++)
    {
    std::cin >> num;
        aux.push_back(aux[i] +num);
    }
    min = aux[k];
    ii = 1;
    for (size_t i = k+1; i <= n; i++)
    {
        if(aux[i] - aux[i-k]< min){
        ii = i-k+1;
        min = aux[i] - aux[i-k];
        }
    }
    std::cout<<ii;
    return 0;
}