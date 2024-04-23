#include <bits/stdc++.h>

using namespace std;

bool can(vector <long long> numbers, long long goalnumber , long long operations){
    long long operations_disp = operations;
    long long tam = numbers.size();
    for (long long i = (tam+1)/2 -1; i < tam; i++)         //empiezo desde la mediana actual y sigo hasta el final del array
    {
        if(goalnumber>=numbers[i]){
            operations_disp -= (goalnumber - numbers[i]);   //actualizo las operaciones disponibles
        }
    }
    return operations_disp>=0; 
}


int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    long long n,k;
    cin>>n;
    cin>>k;
    vector<long long>numbers(n);
    for (long long x = 0; x < n; x++)
    {
        cin>>numbers[x];
    }
    sort(numbers.begin(), numbers.end());
    long long l, r, m;
    l = numbers[(n+1)/2 -1];  //seria la mediana actual
    r = numbers[n-1]+k;       //seria el num más grande + k   
    while(l <= r) {
        m = (l+r)/2;
        if (can (numbers,m, k)){
            l=m+1;
        }else{  
            r=m-1;
        }
    }
    cout<<r<<"\n";
    return 0;
}