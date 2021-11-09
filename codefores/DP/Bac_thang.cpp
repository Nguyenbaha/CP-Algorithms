#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll mod = 1e9+7;
void Never_give_up()

{
    int n,k;
    cin>>n>>k;
    ll dp[n+5]={0};
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;++i)
        for(int j=1;j<=min(i,k);++j)
    {
        dp[i] += dp[i-j];
        dp[i] %=mod;
    }
    cout<<dp[n]<<endl;
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



