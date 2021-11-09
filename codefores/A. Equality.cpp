#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
    ll n,k; cin>>n>>k;
    set<char> st;
    string s; cin>>s;
    for(int i=0;i<n;++i) st.insert(s[i]);
    if(st.size()!=k)
    {
        cout<<0; exit(0);
    }
    else
    {
        char a[st.size()];
        int j=0;
        for(auto e: st) {a[j]=e;j++;}
        int cnt=0;
        for(int i=1;i<st.size();++i)
        {
            if(a[i]-a[i-1] != 1) cnt++;
        }
        if(cnt != 0) { cout<<0; exit(0);}
        else {
            map<char,int> mp;
            int mn=INT_MAX;
            for(int i=0;i<n;++i)
            {
                mp[s[i]]++;
                //mn = min(mn,mp[s[i]]);
            }
            for(int i=0;i<mp.size();++i)
                mn = min(mn,mp[a[i]]);
            cout<<mn*st.size();
        }
    }

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




