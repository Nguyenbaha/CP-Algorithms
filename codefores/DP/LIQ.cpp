#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int dp[1005]={0};
int n;

int ans  = 1;
void Never_give_up()

{
    cin>>n;
    int a[n];
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=1;i<=n;++i)
    {
        dp[i] = 1;
        for(int j=1;j<i;++j)
            if(a[i] > a[j]) dp[i] = max(dp[i],dp[j]+1);

    }
    cout<<dp[n-1];
}


signed main() {
ios::sync_with_stdio(false);
cin.tie(0);



Never_give_up();


 return 0;
}



