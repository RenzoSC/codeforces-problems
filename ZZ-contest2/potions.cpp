#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n;
    cin>>n;
    priority_queue <long long> negatives;
    long long count = 0;
    long long h=0;
    long long mostnegative;
    for (long long i = 0; i < n; i++)
    {
        long long pot;
        cin>>pot;
        if(pot >=0){
            count++;
            h+=pot;
            //cout<<"tomo pocion: "<<pot<<"\n";
            //cout<<"health: "<<h<<"\n";
        }else{
            if(h+pot>= 0){
                count ++;
                negatives.push(-pot);
                h+=pot;
                //cout<<"tomo pocion: "<<pot<<"\n";
                //cout<<"health: "<<h<<"\n";
            }else{
                if(negatives.size()>0){
                    mostnegative =negatives.top();
                    if(mostnegative>-pot ){
                        //cout<<"destomo -"<<mostnegative<<"\n";
                        h +=mostnegative;
                        //cout<<"health: "<<h<<"\n";
                        h+=pot;
                        //cout<<"tomo pocion: "<<pot<<"\n";
                        negatives.pop();
                        negatives.push(-pot);
                    }
                }
            }
        }
    }
    cout<<count;
    return 0;
}