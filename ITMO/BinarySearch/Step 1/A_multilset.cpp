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
    ll n,k;
    cin>>n>>k;
    multiset<ll>ms;
    while(n--)

    {
        ll t;
        cin>>t;
        ms.insert(t);
    }
    while(k--)
    {
        ll t;
        cin>>t;
        cout<<(ms.count(t) ? "YES" :"NO")<<endl;
    }
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
