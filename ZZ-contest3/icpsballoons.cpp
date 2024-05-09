    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int t;
        cin>>t;
        for(int i=0; i<t;i++ ){
            int n;
            int total=0;
            string contest;
            cin>>n;
            cin>>contest;
            map <char,int> problems;
            for (long unsigned int j = 0; j < contest.length(); j++)
            {
                if(problems.count(contest[j])){
                    total++;
                }else{
                    problems[contest[j]]=1;
                    total+=2;
                }
            }
            cout<<total<<"\n";      
        }
        return 0;
    }