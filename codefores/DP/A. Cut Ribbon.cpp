#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int n;
int dp[1005]={0};
void Never_give_up()

{
    cin>>n; int a,b,c;
    cin>>a>>b>>c;
    dp[a]=dp[b]=dp[c]=1;
    for(int i=1;i<=n;++i)
    {
        if(dp[i-a] >0 && (i-a)>=1) dp[i] = max (dp[i-a] + 1, dp[i]);
        if(dp[i-b] >0 && (i-b)>=1) dp[i] = max (dp[i-b] + 1, dp[i]);
        if(dp[i-c] >0 && (i-c)>=1) dp[i] = max (dp[i-c] + 1, dp[i]);
    }
    cout<<dp[n];
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);


Never_give_up();


 return 0;
}



