#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n,m;
    cin>>n>>m;
    int a[n+5][n+5];
    int dp[n+5][n+5];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
        cin>>a[i][j],dp[i][j]=a[i][j];
    int res = 0;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
    {
        if(a[i][j]!=1) continue;
        if(a[i][j]==a[i-1][j] && a[i][j]==a[i][j-1] && a[i][j]==a[i-1][j-1])
            dp[i][j] = min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j]))+1;
        res = max(res,dp[i][j]);
    }
   cout<<res<<endl;
 }

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



