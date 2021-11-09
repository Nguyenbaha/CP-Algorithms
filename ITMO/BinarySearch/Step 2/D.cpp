#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 long double c,ans;
 bool ok(double t)

 {
     return t*t+sqrt(t) >= c;
    // return pow(t,2)+pow(t,0.5)>=c;
 }
void sol()
{
    cin>>c;
    long double l=0,r=c,mid;
    for(int i=0;i<100;++i)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            r=mid;

        }
        else l = mid ;
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

