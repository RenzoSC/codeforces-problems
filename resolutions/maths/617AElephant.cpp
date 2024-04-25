#include <bits/stdc++.h>

using namespace std;
//PASS TEST
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int o, x;
    std::cin >>x;
    o = x / 5;
    o+= x%5 == 0? 0:1;
    std::cout<<o;
    return 0;
}