#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll mod=1e9+7;
ll dp[1005][1005];
void th()
{
    for(int i=0;i<=1000;++i)
    {
        for(int j=0;j<=i;++j)
        {
            if(i==j || j==0) dp[i][j]=1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            dp[i][j]%=mod;
        }

    }
    //return dp[n]
}
void Never_give_up()

{
int n,k; cin>>n>>k;
th();
cout<<dp[n][k]<<endl;
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


