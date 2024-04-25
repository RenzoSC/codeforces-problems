#include <bits/stdc++.h>

using namespace std;
//PASS TEST
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    cin >> n;
    string name;
    map<string, int> freq;
    for (long long i = 0; i < n; i++)
    {
        cin>>name;
        if(freq.count(name)){
            int num = freq[name];
            freq[name]=freq[name]+1;
            cout << name <<num<<'\n';
        }else{
            freq[name]=1;
            cout<<"OK\n";
        }
    }
    return 0;
}