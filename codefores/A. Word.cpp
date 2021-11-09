#include <bits/stdc++.h>
using namespace std;
#define min_3(a,b,c) (min((a),min((b),(c))))
#define all(a) a.begin(),a.end()
#define pb push_back
#define mkp make_pair
#define forn(m,n) for (int i=m; i<n; ++i)
#define fi first
#define se second
#define sz(X) (int)(X).size()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void hoa(string s)
{
    for(int i=0;i<s.size();++i)
        if(s[i]>='a') s[i]-=32;
    for(auto e: s)cout<<e;

}
void thuong(string s)
{
   for(int i=0;i<s.size();++i)
        if(s[i]<'a') s[i]+=32;
    for(auto e: s)cout<<e;

}
void ha()
{
    string s; cin>>s;
    int cnth=0,cntt=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]<'a') cnth++;
        else cntt++;
    }
   // cntt >= cnth ? thuong(s) : hoa(s);
    if(cntt>=cnth) thuong(s);
    else hoa(s);
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





