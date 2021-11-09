#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
double dp[1003][1003];
void Never_give_up()

{
    ll n,mm; cin>>n>>m;
    memset(dp,0,sizeof);
    for(int i=0;i<=n;++i)
        for(int j=0;j<=n;++j)
    {
        if(i==0) {dp[i][j]=1; continue;}
        if(j==0) { dp[i][j]=1; continue;}
        dp[i][j] =  i*1.0/(i+j) + (j*1.0/(i+j))*((j-1)*1.0/(i+j-1))*dp[i][j-2];
    }

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


