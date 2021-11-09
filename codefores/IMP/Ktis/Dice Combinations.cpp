#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll m= 1e9+7;
void Never_give_up()

{
    ll n; cin>>n;
    vector<ll> dp(n+1,0);
    dp[0]=1;
    for(int i=1;i<=n;++i)
        for(int j=1;j<=6 && i-j>=0;++j)
        (dp[i]+=dp[i-j]%m)%=m;
    cout<<dp[n];
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


