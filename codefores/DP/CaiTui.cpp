#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int n,m, dp[104][104];
int res=0;
struct ha
{
    int w=0,v=0;
};
ha a[105];
void Never_give_up()

{
for(int i=1;i<=n;++i)
    for(int j=1;j<=m;++j)
{
    if(j  < a[i].w)
        dp[i][j] = dp[i-1][j];
    else dp[i][j] = max ( dp[i-1][j] , dp[i-1][j-a[i].w] + a[i].v);

}
cout<<dp[n][m];
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
 cin>>n>>m;
 for(int i=1;i<=n;++i)
    cin>>a[i].w>>a[i].v;

Never_give_up();


 return 0;
}



