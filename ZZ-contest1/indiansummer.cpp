    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        long long n;
        cin>>n;
        map<string,set<string>>tree;
        string t,c;
        long long leaves=0;
        for (long long i = 0; i < n; i++)
        {
          cin>>t>>c;
          if(tree.count(t)){
            if(!tree[t].count(c)){
              tree[t].insert(c);
              leaves+=1;
            }
          }else{
            tree[t].insert(c);
            leaves +=1; 
          }
        }
        cout<<leaves;
        return 0;
    }