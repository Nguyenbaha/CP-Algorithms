#include <bits/stdc++.h>
using namespace std;
#define int long long
#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;
 
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
   int n,s;
   cin >> n>>s;
   vector <int> a(n);
   vector<int> dp(s+6,INT_MAX);
   int total = 0;
   for(auto & e: a)
    cin >> e;
    sort(a.begin(),a.end());
    if(a[0] > s )
    {
        cout << -1;
        return;
    }
    dp[0] = 0;
 
    for(int i=1;i <= s; ++i)
         for(int j=0; j < n; ++j)
            if(i >= a[j] && dp[i-a[j]] +1 < dp[i] )
                dp[i] = dp[i-a[j]] + 1;
        
    cout <<(dp[s] == INT_MAX ? -1 : dp[s]);
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