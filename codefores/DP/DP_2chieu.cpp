#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);



ll x,n,m;
cin>>x>>n>>m;
vector<vector<int>> dp(105,vector<int>(105,x));

for(int i=0;i<=n;++i)
{
    for(int j=0;j<=m;++j)
    {
        if(i==0 && j>0)
        {
            dp[i][j] = dp[i][j-1]-10;
        }
        else if(i>0 && j==0)
        {
            dp[i][j] = dp[i-1][j]/2+10;

        }
        else if(i>0 && j>0)
        {
            dp[i][j] = min(dp[i-1][j]/2+10,dp[i][j-1]-10);
        }
    }
}
for(int i=0;i<=n;++i)
    for(int j=0;j<=m;++j)
{
    if(dp[i][j] <= 0)
    {
        cout<<"YES"; return 0 ;
    }
}
cout<<"NO"<<endl; return 0;
}




