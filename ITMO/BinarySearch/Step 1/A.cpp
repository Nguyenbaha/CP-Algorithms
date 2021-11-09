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
    for(ll i=0;i<n;++i) cin>>a[i];
    while(k--)
    {
        ll t;
        cin>>t;
        ll l=0,r=n-1,mid;
        int hi=0;
        while(l<=r)
        {
            mid  =(l+r)>>1;
            if(a[mid]==t)
            {

                hi =1;
                break;
            }
            else if(a[mid] > t) r = mid -1;
            else l = mid +1;
        }
       hi==1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
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
