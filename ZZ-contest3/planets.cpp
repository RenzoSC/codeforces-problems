    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int t;
        cin>>t;
        for(int i=0; i<t;i++ ){
            int n,c;
            cin>>n>>c;
            map <int, int> orbits;
            for (int j = 0; j < n; j++)
            {
                int orb;
                cin>>orb;
                if(orbits.count(orb)){
                    orbits[orb]++;
                }else{
                    orbits[orb]= 1;
                }
            }
            int cost = 0;
            for (auto v :orbits){
                if(v.second <= c){
                    cost+=v.second;
                }else{
                    cost+=c;
                }
            }
            cout<<cost<<"\n";
        }
        return 0;
    }