#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁


signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

  ll n, m; cin>>n>>m;
    ll a[105][105];
    ll dp[105][105];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
        cin>>a[i][j];

    for(int i=1;i<=n;++i)
       {
           for(int j=1;j<=m;++j)
            {   if(i==1 && j==1) dp[i][j] = a[i][j];
                else if(i==1) dp[i][j] = a[i][j] + dp[i][j-1];
                else if(j==1) dp[i][j] = a[i][j] + dp[i-1][j];
                else dp[i][j] = a[i][j] + min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
            }
       }
    cout<<dp[n][m]<<endl;

 return 0;
}


