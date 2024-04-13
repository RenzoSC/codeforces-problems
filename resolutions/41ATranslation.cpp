#include <bits/stdc++.h>

using namespace std;
//PASS TEST
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string inp;
    string trans;
    std::cin>>inp;
    std::cin>>trans;
    int inputL, transL;
    inputL = inp.length();
    transL = trans.length();
    if(inputL>transL){
        std::cout<<"NO";
        return 0;
    }
    for (size_t i = 0; i < inputL; i++)
    {
        if(inp[i]!=trans[transL-i-1]){
            std::cout<<"NO";
            return 0;
        }
    }
    std::cout<<"YES";
    return 0;
}