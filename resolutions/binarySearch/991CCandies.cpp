#include <bits/stdc++.h>

using namespace std;

bool check(long long candies, long long steps){
    long long candies_left = candies;
    long long candies_eat= 0;
    while (candies_left>0)
    {   
        if(candies_left <= steps){
            candies_eat += candies_left;
            candies_left = 0;
        }else{
            candies_left -= steps;
            candies_eat += steps;
        }
        candies_left -= (candies_left / 10);
    }
    bool ans = candies%2 ==0 ? candies_eat >=candies/2 : candies_eat>= ((candies/2)+1);
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    cin>>n;
    long long l, r, m;
    l =1;
    r=n;
    while(l <= r) {
        m = (l+r)/2;
        if (check(n, m)){
            r=m-1;
        }else{  
            l=m+1;
        }
    }
    cout<<l<<"\n";
    return 0;
}