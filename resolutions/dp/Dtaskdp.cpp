#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n , w;
    cin>>n>>w;
    pair <long long,long long> mochilas[n];
    for (long long i = 0; i < n; i++)
    {
        long long peso;
        long long valor;
        cin>>peso>>valor;
        mochilas[i] = {peso,valor};
    }
    sort(mochilas, mochilas+n);
    long long dp[n+100][w+100]; 
    for (long long i = 0; i < n; i++)
    {
        dp[i][0] =0;
    }
    for (long long j = 0; j < w; j++)
    {
        dp[0][j]=0;
    }

 	for(long long i=1;i<=n;i++){
        for (long long j = 1; j <= w; j++)
        {
            if(mochilas[i-1].first>j){
                dp[i][j]= dp[i-1][j];
            }else{
                long long value = mochilas[i-1].second;
                long long cost =  j - mochilas[i-1].first;
                long long comp = value +  dp[i-1][cost];
                dp[i][j] = max(dp[i-1][j], comp);
            }            
        }
 	}
    cout<<dp[n][w];
    return 0;
}
