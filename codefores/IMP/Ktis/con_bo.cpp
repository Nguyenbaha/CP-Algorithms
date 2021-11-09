#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int dp[101][2501];
void Never_give_up()

{
    int w,n; cin>>n>>w;
    int a[n+5];
    for(int i=1;i<=n;++i)cin>>a[i];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
    {
        if(j>=a[i])
            dp[i][j] = max (dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
        else
            dp[i][j] = dp[i-1][j];

    }
    cout<<dp[n][w]<<endl;
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



