#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 ll n,x,y,ans;
 bool ok(ll tmp)
{
  return tmp/x+tmp/y >= n-1;
}
void sol()
{
    cin>>n>>x>>y;
    if(n==1)
    {
        cout<<min(x,y); return;
    }
    ll l=0,r=1e9+1,mid;
    while(l<=r)
    {
        mid =(l+r)>>1;
        if(ok(mid))
        {
            ans = mid;
            r = mid -1;
        }
        else l = mid +1;
    }
    cout<<ans+min(x,y);
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
