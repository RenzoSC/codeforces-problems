#include <bits/stdc++.h>

//PASS TESTS

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, petya, vasya, tonya;
    long long contest_implements = 0;
    std::cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> petya >> vasya >> tonya;
        contest_implements += petya + vasya +tonya >=2 ? 1 : 0;
    }
    std::cout<<contest_implements;
    return 0;
}
