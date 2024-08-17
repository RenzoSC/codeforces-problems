    #include <bits/stdc++.h>
     
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        string f,s;
        cin >> s;
        f.resize(s.length());

        bool first=true;
        bool real = false;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (!first){
                if(islower(s[i])){
                    real = true;
                    break;
                }
                f[i] = tolower(s[i]);
            }else{
                f[i] = islower(s[i])?toupper(s[i]):tolower(s[i]);
                first = false;
            }
        }
        cout<< (real?s:f);
        return 0;
    }