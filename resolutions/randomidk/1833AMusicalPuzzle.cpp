#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, n, res;
    string melody;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        set<string>melodies;
        string note;
        cin >> n;
        cin >> melody;
        for (int j = 0; j < n-1; j++)
        {  
            note = melody.substr(j,2);
            melodies.emplace(note);
        }
        cout<<melodies.size()<<'\n';
    }
    return 0;
}
