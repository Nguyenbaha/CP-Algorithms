#include <bits/stdc++.h>
using namespace std;

#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 1e6+5 ;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define ALL(s) s.begin(),s.end()
 const int mod= 1e9+7;
 
int fpow(int a, int n){
    if (n==0) return 1;
    if (n%2==1) return (a*fpow(a*a%mod,n/2))%mod;
    else return fpow(a*a%mod,n/2);
}
typedef unsigned long long ull;
int T=1;


// Here

void unstoppable()
{
   int n;
   cin >> n;
   vector <int>dp(n+6);
   dp[0] = 1;
   dp[1] = 1;
   for(int i=2;i <=n; ++i)
    {  
        for(int j=1;j <= 6 && j <= i;++j)
            (dp[i]+=(dp[i-j]))%=mod;
    }

    cout <<dp[n];


}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   // cin >> T;
    while(T--)
{
    unstoppable();
 }


}