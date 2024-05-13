    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        long long t;
        cin>>t;
        for (long long i = 0; i < t; i++)
        {
          long long a,b,n;
          cin>>a>>b>>n;
          long long count=0;
          while (a<=n && b<=n)
          {
            long long chico;
            chico = min(a,b);
            if(chico==a){
              a+=b;
            }else{
              b+=a;
            }
            count++;
          }
          cout<<count<<"\n";
        }
        
        return 0;
    }