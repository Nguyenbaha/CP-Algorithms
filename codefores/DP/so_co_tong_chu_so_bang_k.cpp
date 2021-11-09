#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

ll dp[101][50005];
ll mod = 1e9+7;
void Never_give_up()

{
    for(int i=0;i<10;++i)
        dp[i][0] =0;
    for(int j=0;j<50005;++j)
        dp[0][j]=0;
    for(int j=1;j<=9;++j)
        dp[1][j]=1;
    for(int i=1;i<=100;++i)
        for(int so=0;so<9;++so)
            for(int j=so;j<=50005;++j)
                dp[i][j] = (dp[i][j]%mod + dp[i-1][j-so]%mod)%mod;
    ll n,k; cin>>n>>k;
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



