#include <bits/stdc++.h>

using namespace std;

int solvedp(vector <int> *dp, vector <int> *alturas,  int pos, int maxsalto){
    vector <int> &dpaux = *dp;
    vector <int> &alturasaux = *alturas;
    if(dpaux[pos-1]==-1){
        int res = INT32_MAX;
        for (int i = 0; i < min(maxsalto, pos-1); i++)
        {
            dpaux[pos-2-i] = solvedp(dp,alturas,pos-1-i, maxsalto);
            int costosalto = dpaux[pos-2-i] + abs(alturasaux[pos-1] - alturasaux[pos-2-i]);
            res = min(res, costosalto);
        }

        return res;
    }else{
        return dpaux[pos-1];
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    int k;
    vector <int> alturas;

    cin>>n;
    cin>>k;

    for (int i = 0; i < n; i++)
    {
        int h;
        cin>>h;
        alturas.push_back(h);
    }

    vector <int> dp(n+10, -1); 
    dp[0] = 0;
    dp[1] = abs(alturas[0] - alturas[1]);
    cout<<solvedp(&dp,&alturas,n,k);
    return 0;
}
