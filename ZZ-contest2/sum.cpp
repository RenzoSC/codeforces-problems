    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        long long t;
        cin>>t;
        for (long long i = 0; i < t; i++)
        {
          long long a, b,c;
          cin>>a >>b>>c;
          if(a==(b+c)){
            cout<<"YES\n";
          }else if(b==(a+c)){
            cout<<"YES\n";
          }else if(c==(a+b)){
            cout<<"YES\n";
          }else{
            cout<<"NO\n";
          }
        }
        return 0;
    }