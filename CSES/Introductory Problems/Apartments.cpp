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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;++i)
        cin>>a[i];
    ll cnt=0;
    sort(a.begin(),a.end());;
    while(m--)
    { //60 75 80
        ll tmp;
        cin>>tmp;
        ll res = lower_bound(a.begin(),a.end(),tmp)-a.begin();
        ll s1= abs(a[res]-k);
        ll s2 = a[res]+k;
        if( s1<= tmp || s2<=tmp )
        {
            cnt++;
            a.erase(a.begin()+res-1);
        }
    }
    cout<<cnt;
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

