#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long n, x;
    cin>>n>>x;
    vector <long long> numbers(n);
    for (long long i = 0; i < n; i++)
    {
        cin>>numbers[i];        
    }
    long long i, j;

    i=0;
    j=0;
    long long sum, count;
    count=0;
    sum=0;
    while (i+j <= 2*(n-1))
    {   
        if(i==j){
            sum=numbers[i];
            if(sum== x){
                i++;
                j++;
                count++;
            }else if(sum>x){
                i++;
                j++;
                sum =0;
            }else{
                j++;
            }
        }else{
            sum+=numbers[j];
            if(sum == x){
                sum-=numbers[i];
                sum-=numbers[j];
                i++;
                count++;
            }else if(sum>x){
                sum -=numbers[i];
                sum-=numbers[j];
                i++;
            }else{
                j++;
            }
        }
    }
    cout<<count;
    return 0;
}