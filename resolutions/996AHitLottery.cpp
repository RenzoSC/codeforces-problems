#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n, output;
    std::cin>>n;
    output = 0;
    int bills[5]={100,20,10,5,1};

    for (size_t i = 0; i <5; i++)
    {
        output += n / bills[i];
        n %= bills[i];
    }
    std::cout<<output;
    return 0;
}