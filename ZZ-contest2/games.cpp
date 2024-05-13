    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        long long n;
        cin>>n;
        vector <pair<long long,long long>>teamcolors;
        map <long long, long long>guestcolors;
        for (long long i = 0; i < n; i++)
        {
          long long home, guest;
          cin >> home >> guest;
          teamcolors.push_back({home,guest});
          if(guestcolors.count(guest)){
            guestcolors[guest]+=1;
          }else{
            guestcolors[guest]=1;
          }
        }
        long long times = 0;
        for (long long i = 0; i < n; i++)
        {
          long long hom = teamcolors[i].first;
          long long howmany = guestcolors[hom];
          times+=howmany;
        }
        cout<<times;
        return 0;
    }