#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+6;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin >> m >> n;
    int dp[106][106];
    for(int j=0;j <=n; ++j)
        dp[0][j] = dp[m+1][j] = -1e9;
    for(int i=1;i <= m;++i)
        for(int j=1;j <= n; ++j)
        {
            cin >> dp[i][j];
        }
    for(int j=2;j <= n; ++j)
        for(int i=1; i <= m; ++i)
            
                dp[i][j] = dp[i][j] + max(dp[i-1][j-1],max(dp[i+1][j-1], dp[i][j-1]));
    int ans =-1e9 ;
    for(int i=1; i <=m;++i)
        ans = max(ans,dp[i][n]);
    cout <<ans;
}