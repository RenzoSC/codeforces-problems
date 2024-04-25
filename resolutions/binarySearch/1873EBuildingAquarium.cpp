#include <bits/stdc++.h>

using namespace std;

bool can(vector <long long> coral, long long height, long long water){
    long long water_disp = water;
    long long tam = coral.size();
    //cout<<"tam: "<<tam<<"\n";
    for (long long i = 0; i < tam; i++)
    {
        //cout<<"water disp: "<<water_disp<<" - ("<<height<<" - "<<coral[i]<<")\n";
        if(height>=coral[i]){
            water_disp -= (height - coral[i]);
        }
    }
    //cout<<(water_disp>=0 ? "Se pudo\n":"No se pudo\n");
    return water_disp>=0; 
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long t;
    cin>>t;
    for (long long i = 0; i < t; i++)
    {
        long long n,x;
        cin>>n>>x;
        vector<long long>coral;
        for (long long j = 0; j < n; j++)
        {
            long long col;
            cin>>col;
            coral.push_back(col);
        }
        if(n==1){
            cout<<coral[0]+x<<"\n";
        }else{
            sort(coral.begin(), coral.end());
            long long l, r,m;
            l=1;
            r=max(x,coral[n-1])+x;
            while(l <= r) {
                m = (l+r)/2;
                if (can (coral,m, x)){
                    l=m+1;
                }else{  
                    r=m-1;
                }
            }
            cout<<r<<"\n";
        }
    }
    

    return 0;
}