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
    ll n,d;
    cin >>n>>d;
    vector<int>v(n);
    for(int i=0;i<n;++i)
        cin>>v[i];
    sort(v.begin(),v.end());
    bool hi=true;
    for(int i=0;i<n;++i)
    {
        if(v[i]>d) {
            hi=false; break;
        }
    }
    if(hi)
    {
        cout<<"YES"<<endl;
        return;
    }
    if(v[0]+v[1] <= d) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

