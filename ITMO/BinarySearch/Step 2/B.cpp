#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 ll a[10005];
 double l=0,r=1e7+10,mid;
 ll n,k;
 bool ok(double tmp)
 {
     ll s=0;
     for(int i=0;i<n;++i)
        s+=(a[i]/tmp);
     return s>=k;
 }
void sol()
{
    cin>>n>>k;
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<100;++i)
    {
        mid =(l+r)/2;
        if(ok(mid))
        {
            l=mid;
        }
        else r=mid;
    }
    cout<<prec(7)<<l;
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
