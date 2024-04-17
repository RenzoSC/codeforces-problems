#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, a, b, c;
    cin>>n;
    cin>>a>>b>>c;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i >= a && dp[i - a] != -1) {
            dp[i] = max(dp[i], dp[i - a] + 1);
        }
        if (i >= b && dp[i - b] != -1) {
            dp[i] = max(dp[i], dp[i - b] + 1);
        }
        if (i >= c && dp[i - c] != -1) {
            dp[i] = max(dp[i], dp[i - c] + 1);
        }
    }
 
    cout << dp[n] << endl;
    return 0;
}