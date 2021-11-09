
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

void ha()
{
ll n,a,b,c; cin>>n>>a>>b>>c;
ll dp[4005];
for(ll i=0;i<4005;++i) dp[i] = -1;
dp[0] = 0;
for(ll i=0;i<n;++i)
    if(dp[i] != -1)
{
    dp[i+a] = max(dp[i] + 1,dp[i+a]);
    dp[i+b] = max(dp[i] + 1,dp[i+b]);
    dp[i+c] = max(dp[i] + 1,dp[i+c]);
}
cout<<dp[n];
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




