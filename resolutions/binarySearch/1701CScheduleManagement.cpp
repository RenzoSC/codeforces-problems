#include <bits/stdc++.h>

using namespace std;

bool can(vector <long long> god,long long nworkers,long long time, long long tareas){
    long long done, total;
    done=0;
    total=0;
    for (long long i = 0; i < nworkers; i++)
    {
        done = min(time, god[i]);    //si es bueno en algo intentará ocupar todo el tiempo posible en eso
                                     //y eso podría llevarle todo TIME o solo las tareas que son buenas

        done += (time-done)/2;       //si le sobra tiempo o no es bueno en nada (osea q le sobra tdo el tiempo xd)le toma el doble de tiempo
                        
                                    //con eso obtengo el total de tareas que puede hacer un worker
        total+=done;
    }
    return total>=tareas;          //si hice todas las tareas con el tiempo q me dieron joia
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    for (int x = 0; x < t; x++)
    {
        long long workers, work;
        cin>>workers>>work;
        vector<long long>goodat(workers,0);
        for (long long i = 0; i < work; i++)
        {  
            long long workgood;
            cin>>workgood;
            goodat[workgood-1]++;
        }
        long long l, r, m;
        l = 1;
        r = work*2;
        while(l <= r) {
            m = (l+r)/2;
            if (can(goodat,workers,m, work)){
                r=m-1;
            }else{
                l=m+1;
            }
        }
        cout<<l<<"\n";
    }

    return 0;
}