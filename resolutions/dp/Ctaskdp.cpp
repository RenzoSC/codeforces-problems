#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int dp[n+10][3];
 	for(int i=1;i<=n;i++){
 		int a,b,c;
 		cin>>a>>b>>c;
 		if(i==1){
 			dp[1][0]=a;
 			dp[1][1]=b;
 			dp[1][2]=c;
 		}
 		else{
 			dp[i][0]=a+max(dp[i-1][1],dp[i-1][2]);   //voy guardando el valor del siguiente;
 			dp[i][1]=b+max(dp[i-1][0],dp[i-1][2]);
 			dp[i][2]=c+max(dp[i-1][1],dp[i-1][0]);
 		}
 	}
    //Simplemente hago print del max entre haber elegido A,B,C en el ultimo N
 	cout<<max({dp[n][0],dp[n][1],dp[n][2]})<<endl;  
    
    return 0;
}
