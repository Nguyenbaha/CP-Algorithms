#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here

void sol()
{
    ll x,y,a,b;
    cin>>x>>y;
    cin>>a>>b;
   if(x>y) swap(x,y);
   b = min(b,2*a);
   ll res = a*(y-x) + b*x;
   cout<<res<<endl;
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

