#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    vector <long long> prices;
    cin>>n;
    for (long long x = 0; x < n; x++)
    {
        long long price;
        cin>>price;
        prices.push_back(price);
    }
    sort(prices.begin(), prices.end());
    long long q;
    cin >> q;
    for (long long x = 0; x < q; x++)
    {
        long long money;
        cin>>money;
        long long result = upper_bound(prices.begin(), prices.end(),money) - prices.begin();
        cout<<(result==n+1?0:result)<<"\n";
    }
    return 0;
}