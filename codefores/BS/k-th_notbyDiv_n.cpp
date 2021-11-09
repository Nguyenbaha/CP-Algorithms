#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here

void sol()
{
    ll n,k;
    cin>>n>>k;
    ll mid,l=0,r=INT_MAX;
    while(l!=r)
    {
        mid = (l+r)>>1;
        if(mid - mid/n < k ) l=mid+1;
        else r=mid;
    }
    cout<<l<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
    sol();
 }

 return 0;
}
