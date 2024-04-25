#include <bits/stdc++.h>

using namespace std;

//PASS TEST

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k,n,w, total;
    std::cin >>k>>n>>w;
    //w*(w+1)/2 me da la sumatoria *k sería todo
    //lo que le costaría comprar w bananas 
    //siendo q la primera cuesta k
    // k* 1 + k*2 + k*3 .. +k*w
    total=k*w*(w+1)/2;
    std::cout<< (total<=n?0:total-n); 
    return 0;
}