#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int x=0;
    char input[3];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cin >> input[j];
        }
        if (input[0] == 'X'){
            x += input[1] == '+' ? 1:-1;
        }else{
            x += input[0] == '+' ? 1:-1;
        }
    }
    cout << x;
    return 0;
}