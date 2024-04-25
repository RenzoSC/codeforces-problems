#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t;
    cin>>t;

    for (long long x = 0; x < t; x++)
    {
      long long n;
      cin>>n;
      vector <long long> array(n);
      for (long long i = 0; i < n; i++)
      {
        cin>>array[i];
      }
      sort(array.begin(),array.end());
      bool can= true;
      for (long long j = 0; j < n-1 && can; j++)
      {
        can &= abs(array[j]-array[j+1])<=1;
      }
      
      cout<<(can?"YES\n":"NO\n");
    }
    
    return 0;
}