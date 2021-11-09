#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int dp[1005][1005];
void Never_give_up()

{
    string s1,s2;
    cin>>s1>>s2;
    int res =0;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=s1.size();++i)
        for(int j=1;j<=s2.size();++j)
    {
        if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1]+1;
        else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        res = max(res,dp[i][j]);
    }
    cout<<res<<endl;

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



