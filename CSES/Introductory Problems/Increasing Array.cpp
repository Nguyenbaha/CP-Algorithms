#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
int s=0;
void sol()
{
    ll n;
    cin>>n;
    ll s=0; ll pre = 0;
    while(n--)
    {
        ll cur;
        cin>>cur;
        if(pre > cur) s+= (pre - cur);
        else pre = cur;
    }
    cout<<s;
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

