    #include <bits/stdc++.h>
     
    using namespace std;
     
    //PASS TEST

    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        string f,s;
        cin >> f>>s;
        for (size_t i = 0; i < f.length(); i++)
        {
          f[i] = tolower(f[i]);
          s[i] = tolower(s[i]);
        }
        int res;
        res = f < s ? -1 : (f> s? 1 :0);
        cout<< res;
        return 0;
    }