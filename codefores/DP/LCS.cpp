#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int dp[1005][1005];
string s1,s2;
ll ans  = 0;
void Never_give_up()

{
cin>>s1>>s2;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=s1.size();++i)
        for(int j=1;j<=s2.size();++j)
        if(s1[i]==s2[j]) dp[i][j] = dp[i-1][j-1] +1;

        else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    ans = dp[s1.size()][s2.size()];
    cout<<ans;
}


signed main() {
ios::sync_with_stdio(false);
cin.tie(0);



Never_give_up();


 return 0;
}



