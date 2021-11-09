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
void ha()
{
map<char,ll> mp;
string s;
cin>>mp['1'] >> mp['2'] >> mp['3'] >>mp['4'];
cin>>s;
ll ans = 0;
for(ll i=0;i < s.size();++i)
{
        ans += mp[s[i]];
}
cout<<ans;
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





