#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int mod = 1e9+7 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 ll fastpow(ll x,ll y)
 {
      ll res  = 1;
      x %=mod;
      while(y)
      {
          if(y&1) res = (res*x)%mod;
          y>>=1;
          x =(x*x)%mod;
      }
      return res;
 }
void sol()
{
    ll n;
    cin>>n;
    cout<<fastpow(2,n);
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
while(tc--)
{
    sol();
 }

 return 0;
}
