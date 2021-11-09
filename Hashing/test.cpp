#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;
const ll base = 311;
const int maxn = 1e6+6;
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
 
// in các vị trí xuất hiện của xâu P trong T
// Here
 
 
void unstoppable()
{
   string s;
   cin >> s;
   int n=s.size();
   set<string> st;
   st.insert(s);
   s+=s;
   for(int i=1; i <n; ++i)
   {
    string tmp = s.substr(i,n);
    st.insert(tmp);
   }
   for(auto e: st)
   {
    cout <<e ;
    return;
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