#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{

    int tc; cin>>tc;
    while(tc--)
    {

        int n; cin>>n;
        set<string> st;
        int fg[n];
        // svector<string> v;
        string s[n];
        map<string,int>mp;
        for(int i=0;i<n;++i)
        {
           cin>>s[i];

            st.insert(s[i]);
            //v.push_back(s);
            mp[s[i]]++;
        }
        if(st.size()==n)
        {
            cout<<0<<endl;
             for(int i=0;i<n;++i)cout<<s[i]<<endl;
        }
        else
        {
           ll ans=0,k=0;
           for(int i=0;i<n;++i)
           {
               if(mp[s[i]]<=1) continue;
               for(int j=0;j<4;++j)
               {
                   for( k=0;k<10;++k)
                   {
                       string t = s[i];
                       t[j] = k + '0';
                       if(mp[t]==0)
                       {
                           ans++;
                           mp[s[i]]--;
                           mp[t]++;
                           s[i] = t;
                           break;
                       }
                   }
                   if(k<10) break;
               }
           }
           cout<<ans<<endl;
           for(int i=0;i<n;++i)cout<<s[i]<<endl;

        }
     mp.clear();
            st.clear();
    }


}


int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




