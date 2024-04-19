    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      long long t;
      cin>>t;
      for (long long i = 0; i < t; i++)
      {
        long long n,q, l,r ,k;
        cin>>n>>q;
        vector<long long>array(n);
        vector<long long>sumarray(n+1);
        sumarray[0]=0;
        for (long long j = 0; j <n; j++)//segunda linea
        {
          long long number;
          cin>>number;
          array[j]=number;
          sumarray[j+1]= sumarray[j]+number;
          
        }
        long long remembersumatoria = sumarray[n];
        for(long long m = 0; m<q;m++){
          cin >> l>>r>>k; //tercera linea
          long long sumatoria= remembersumatoria;
          sumatoria = remembersumatoria- (sumarray[r]-sumarray[l-1]) + k*(r-l+1);
          if(sumatoria%2==0){
            cout<<"NO\n";
          }else{
            cout<<"YES\n";
          }   
        }
      }
      
      return 0;
    }
