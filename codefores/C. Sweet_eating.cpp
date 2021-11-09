#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const ll N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll f[N],a[N],dp[N];
void ha()
{
 ll n,m; cin>>n>>m;
 for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 sort(a+1,a+n+1);
 for(int i=1;i<=n;++i)
 {
     f[i] = f[i-1]+a[i];
     dp[i] = (i<=m ? 0 : dp[i-m] ) + f[i];
     cout << dp[i] << " ";
 }

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




