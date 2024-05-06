#include <bits/stdc++.h>

using namespace std;

//not done yet

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long n, x;
    cin>>n>>x;
    vector <long long> numbers(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>numbers[i];        
    }
    for (long long i = 0; i < n; i++)
    {
        for (long long j = i+1; j < n; j++)
        {
            if(numbers[i]+numbers[j]==x){
                cout<<i+1<<" "<<j+1;
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}