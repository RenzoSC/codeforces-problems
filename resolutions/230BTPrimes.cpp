#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    long long number;
    long long raiz;
    cin>>n;
    for (long long i = 0; i < n; i++)
    {
        cin>>number;
        if(number <= 3){
            cout<<"NO\n";
            continue;
        }
        raiz = sqrt(number);
        if(pow(raiz,2) != number){
            cout<<"NO\n";
        }else{
            long long raizprimo = sqrt(raiz);
            bool esprimo = true;
            for (long long j = 2; j <= raizprimo; j++)
            {
                if(raiz % j == 0){
                    cout<<"NO\n";
                    esprimo=false;
                    break;
                }   
            }
            if(esprimo){
                cout<<"YES\n";
            }
        }
    }
    return 0;
}