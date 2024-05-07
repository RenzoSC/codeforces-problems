#include <bits/stdc++.h>

using namespace std;

int solvedp(vector <int> *dp, vector <int> *alturas,  int pos){
    vector <int> &dpaux = *dp;
    vector <int> &alturasaux = *alturas;
    if(dpaux[pos-1]==-1){
        dpaux[pos-3] = solvedp(dp,alturas, pos-2);
        dpaux[pos-2] = solvedp(dp,alturas, pos-1);
        int costo1salto = dpaux[pos-2] + abs(alturasaux[pos-1] - alturasaux[pos-2]);
        int costo2saltos = dpaux[pos-3] + abs(alturasaux[pos-1] - alturasaux[pos-3]);
        int res = min( costo1salto , costo2saltos);
        return res;
    }else{
        return dpaux[pos-1];
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    vector <int> alturas;

    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int h;
        cin>>h;
        alturas.push_back(h);
    }
    vector <int> dp(n+10, -1); 
    dp[0] = 0;
    dp[1] = abs(alturas[0] - alturas[1]);
    cout<<solvedp(&dp,&alturas,n);
    return 0;
}
