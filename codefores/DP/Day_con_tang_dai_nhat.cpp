#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int a[1005],n,dp[1005]={0},res=0;
    cin>>n;
    int ans=0;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i)
    {
        dp[i]=1;
        for(int j=1;j<i;++j)
        {
            if(a[i]>a[j])
                dp[i] = max(dp[i],dp[j]+1);
        }
        ans= max(res,dp[i]);
    }
    cout<<ans;
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


