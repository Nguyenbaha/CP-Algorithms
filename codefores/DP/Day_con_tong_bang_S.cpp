#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int a,n,s;
   cin>>n>>s;
   int dp[40005]={0};
   dp[0]=1;
   for(int i=1;i<=n;++i)
   {
       cin>>a;
       dp[a] = 1;
       for(int j=s;j>=a;--j)
       {
           if(dp[j-a]==1)
            dp[j]=1;
       }
   }
   if(dp[s]==1)cout<<"YES\n";
   else cout<<"NO\n";
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


