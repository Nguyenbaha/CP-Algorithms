#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
long long int l=1,r=1,mid,ans,n,w,h;
bool ok(long long int a)
{
    return (a/w)*(a/h) >= n;
}
void sol()
{

    cin>>w>>h>>n;
    while(!ok(r))
    {
        r*=2;
    }
    while(l<=r)
    {
        mid =(l+r)>>1;

        if(ok(mid))
        {
            ans = mid;
            r=mid-1;
        }
        else l = mid+1;
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
