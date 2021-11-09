#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
    ll n,k;
void sol()
{
    cin>>n>>k;
    ll a[N+1];
    ll ans=0;
    ll b[N+1];
    for(int i=0;i<n;++i)
    {
      cin>>a[i];
      //b[i]=a[i];
    }
    //sort(a,a+n);
    for(int i=0;i<n;++i)b[i]=a[i];
    for(int i=n-2;i>=0;--i)
        b[i] = b[i-1]+b[i];
    for(int i=1;i<n;++i)
        a[i] += a[i-1];
//    1 1 2 3
//    1 2 4 7
    ll l=0,r=n-1,mid;
    while(l<=r)
    {
        mid = (l+r)>>1;
        if(a[mid] <=k)
        {
            ans = mid;
            l = mid +1;
        }
        else r=mid-1;
    }
    ll res = ans;
    ans =0;
      ll ll=0,rr=n-1,midd;
    while(l<=r)
    {
        midd = (ll+rr)>>1;
        if(a[midd] <=k)
        {
            ans = mid;
            ll = midd +1;
        }
        else rr=midd-1;
    }
    cout<<max(++ans,++res);
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
