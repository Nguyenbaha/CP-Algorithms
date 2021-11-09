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
    ll x,y;
    cin>>x>>y;
    //ll ans = 0;
    if(x==1 || y==1)
    {
        cout<<0<<endl;
        return;
    }
    ll l,r,mid,s=0;
    for(ll i=1;i< min(y,40000ll);++i)
    {
        l =i,r=y;
        ll ans = 0;
        cout<<"CCCCase "<<i<<endl;
        cout<<endl;
        while(l<=r)
        {
            mid=(l+r)/2;
            cout<<"l: "<<l <<" r:"<<r<<" mid: "<<mid<<endl;
            ll tmp = 1ll*mid*(ll)i+(ll)i; cout<<" tmp "<<tmp<<endl;
            if(tmp <= x)
            {
                ans = mid;
                l = mid+1;
                cout<<"RES :X:"<<tmp<<" Y:"<<mid<<endl;
            }
            else r=mid-1;
        }
        cout<<" i: "<<i<<" Ans: "<<ans<<endl;
        cout<<"ans-i:" <<ans-i<<endl;
        s+=max(ans-i,0ll);
    }
    cout<<s<<endl;
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

