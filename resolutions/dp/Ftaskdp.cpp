#include <bits/stdc++.h>

using namespace std;

int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string n , w;
    string elems[2];
    cin>>elems[0]>>elems[1];
    int maxl = max(elems[0].length(), elems[1].length());
    pair <string,int>dp[4][maxl+10];
    dp[0][0] = {"",0};
    dp[1][0] = {"",0};

    for (int i = 0; i < 2; i++)
    {
        int comp=i == 0? 1:0;
        for (int j = 1; j <= elems[i].length() ; j++)
        {
            for (int x = dp[i][j-1].second; x < elems[comp].length(); x++)
            {
                //cout <<"elems["<<i<<"]["<<j-1<<"] = "<<elems[i][j-1]<<"-- "<<"elems["<<comp<<"]["<<x<<"] = "<<elems[comp][x]<<"\n";
                if(elems[i][j-1] == elems[comp][x]){
                    dp[i][j] = {dp[i][j-1].first + elems[comp][x],x+1};
                    //cout<<"guardado: "<<dp[i][j].first<<"\n";
                    break;
                }else{
                    dp[i][j] = dp[i][j-1];
                }
            }
        }
    }
    string s1 = dp[0][elems[0].length()].first;
    string s2 = dp[1][elems[1].length()].first;
    cout<<(s1.length() < s2.length() ? s2:s1);
    //cout<<"\ns1 "<<s1<< "  s2: "<<s2<<"\n";
    return 0;
}
//ta mal xd