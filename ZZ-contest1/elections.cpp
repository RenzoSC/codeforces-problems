    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        long long t, a,b,c;
        cin>>t;
        for (long long i = 0; i < t; i++)
        {
          cin>> a>>b>>c;
          set<long long>votos;
          votos.insert(a);
          votos.insert(b);
          votos.insert(c);
          long long max= *votos.rbegin();
          votos.erase(max);
          if(a==b && a==c){
            cout<<"1 1 1\n";
          }
          else if(a== b && b!=c &&a==max){
            cout<<"1 1 "<< (max-c +1)<<"\n";
          }else if(a==c && a!=b && a ==max){
            cout<<"1 "<< (max-b +1)<<" 1"<<"\n";
          }else if(b==c && a!=c && b==max){
            cout<<(max-a+1)<<" 1 1\n";
          }else{
            cout<<(max == a ?0:(max - a + 1))<<" "<<(max==b?0:(max- b +1))<< " "<<(max==c?0:(max -c +1))<<"\n";
          }
          
          votos.clear();
        }
        
        return 0;
    }