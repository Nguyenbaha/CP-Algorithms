#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here

void sol()
{
    ll ans=LONG_MAX;
    ll n;
    ll a[21];
    cin>>n;
    for(ll i=0;i<n;++i) cin>>a[i];
    for(ll i=0;i<(1<<n);++i)
    {
        ll l=0,r=0;
        for(ll j=0;j<n;++j)
            if((i>>j)&1) l+=a[j];
        else r +=a[j];
        ans = min(ans,abs(l-r));
    }
    cout<<ans;
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

