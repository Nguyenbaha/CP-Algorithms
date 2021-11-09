#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;
const int maxn = 1e6+6;
const ll base = 311;
#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define ALL(s) s.begin(),s.end()
 const ll mod= 1e9+7;
 
int fpow(int a, int n){
    if (n==0) return 1;
    if (n%2==1) return (a*fpow(a*a%mod,n/2))%mod;
    else return fpow(a*a%mod,n/2);
}
typedef unsigned long long ull;
int T=1;
ll powbase[maxn];
ll h[maxn];
vector <int> ans;
string s;

ll gethash( int l, int r)
{
    l++,r++;
    return (h[r] - h[l-1]*powbase[r-l+1]%mod + mod)%mod;
}

void unstoppable()
{
   cin >> s;
   int n = s.size();
   h[1] = s[0];
   powbase[0] = 1;
   for(int i = 1;i <=n; ++i)
    powbase[i] = powbase[i-1]*base%mod;
    for(int i=1; i < n; ++i)
        h[i+1] = (h[i]*base + s[i])%mod;
    for(int i  = n - 1; i > 0; --i)
        if(gethash(0,i-1) == gethash(n-1-i+1, n-1))
            ans.push_back(i);
    /*for(auto e: ans)
        cout << e<< ' ';
    return; 
*/    if(ans.size())
    {
        for(int i = 0; i < ans.size(); ++i)
            for(int j=1; j <= n-1-ans[i]; ++j)
                if(gethash(j,j+ans[i]-1) == gethash(0,ans[i]-1))
                {
                    cout << s.substr(0,ans[i]);
                    return;
                }
    }
    cout <<"Just a legend";
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