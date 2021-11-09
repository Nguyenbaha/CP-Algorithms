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
   int n;
   string s;
   cin >> n >> s;
   map<char, int> mp, vis;
   for(char c: s)
    mp[c] ++;
    for(auto e: mp)
        if(e.second % n)
        {
            cout << -1;
            return;
        }
    string ans ="";
    for(int i =0; i < s.size(); ++i)
    {
        if(!vis[s[i]])
        {
            vis[s[i]] = 1;
            int tmp = mp[s[i]]/n;
            for(int j=0; j< tmp; ++j)
                ans += s[i];
        }
    }
    while(n--)
    {
        cout << ans;
    }
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