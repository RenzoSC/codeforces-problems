#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        long long n , l , r;
        cin>>n>>l>>r;
        vector <long long> nums;
        for (long long j = 0; j < n; j++)
        {
            long long n;
            cin>>n;
            nums.push_back(n);
        }
        sort(nums.begin(), nums.end());
        long long total = 0;
        for (long long i = 0; i < n-1 && nums[i]<r; i++)
        {
            long long howmany;
            auto left = lower_bound(nums.begin()+i+1, nums.end(), l-nums[i]) - nums.begin();
            auto right = upper_bound(nums.begin()+i+1, nums.end(), r-nums[i]) - nums.begin();
            howmany = right-left;
            total +=howmany;
        }
        cout<<total<<"\n";   
    }
    return 0;
}