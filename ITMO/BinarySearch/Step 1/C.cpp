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
    vector<ll> a(n);
    for(auto &i:a)cin>>i;
    while(k--)
    {
        ll t;
        cin>>t;
        ll res  = lower_bound(a.begin(),a.end(),t)-a.begin();
        cout<<++res<<endl;
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

