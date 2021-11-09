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

int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

string s,res;
int n,ans=0; cin>>n>>s;
string t;
map<string,int> mp;
for(int i=1;i<n;++i)
{

    t = s[i-1];
    t+= s[i];
    mp[t]++;
    if(mp[t] >= ans)
    {
        ans = mp[t];
        res = t;
    }
}
cout<<res;

return 0;
}




