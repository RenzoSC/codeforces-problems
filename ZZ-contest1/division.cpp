#include <bits/stdc++.h>

using namespace std;

//PASSTEST

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long t, rating;
    cin>>t;
    for (long long i = 0; i < t; i++)
    {
      cin>>rating;
      if(rating <=1399){
        cout<<"Division 4\n";
      }else if(rating>=1400 && rating<=1599){
        cout<<"Division 3\n";
      }else if(rating>=1600 && rating<=1899){
        cout<<"Division 2\n";
      }else{
        cout<<"Division 1\n";
      }
    }
    
    return 0;
}