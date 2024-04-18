    #include <bits/stdc++.h>
     
    using namespace std;
     
    char wich(map<char,int>dict,char a, char b){
      if(dict[a]<dict[b]){
        return '<';
      }else if(dict[a]>dict[b]){
        return '>';
      }else{
        return '=';
      }
    }
     
    int main()
    {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        long long t;
        cin>>t;
        map<char,int>sizes;
        sizes['S']=0;
        sizes['M']=1;
        sizes['L']=2;
        for (long long i = 0; i < t; i++)
        {
          string a,b;
          cin>>a>>b;
          long long lena,lenb;
          lena=a.length();
          lenb=b.length();
          char sizea, sizeb;
          sizea = a[lena-1];
          sizeb = b[lenb-1];
          
          if(lena ==lenb){
            cout<<wich(sizes, sizea, sizeb)<<'\n';
          }else{
            long long suma, sumb;
            if(sizea == 'S'){
              suma = -1*(lena-1);
            }else{
              suma = 1 + (lena-1);
            }
            if(sizeb == 'S'){
              sumb = -1*(lenb-1);
            }else{
              sumb = 1 + (lenb-1);
            }
            cout<<(suma<sumb?"<\n":(suma==sumb?"=\n":">\n"));
          }
        }
        return 0;
    }