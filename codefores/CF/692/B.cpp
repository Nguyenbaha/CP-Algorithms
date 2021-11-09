#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here

void sol()
{
    ll n;
     cin>>n;
     vector<ll> v;
     for(ll i=n;i<=1e18;++i)
     {
         v.clear();
         ll tmp = i;
         while(tmp)
         {
             if(tmp%10 != 0)
                v.push_back(tmp%10);
             tmp/=10;
         }
         bool test=0;
         for(auto e: v)
            if(i % e !=0)
                test=1;
         if(!test)
         {
             cout<<i<<endl;
             break;
         }
     }
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
