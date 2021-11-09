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

int n; cin>>n;
vector<int> a(n);
for(int &x: a)cin>>x;
vector<int> dp(n);
dp[0]=1; int m=1;
for(int i=1;i<n;++i)
{
    dp[i] = 0;
    for(int j=0;j<n;++j)
    {
        if(a[i] > a[j]) dp[i] = max(dp[i],dp[j]);

    }
     dp[i]++;
        m = max(m,dp[i]);
}
cout<<m;
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




