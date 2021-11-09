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
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<1; return;
    }
    cout<<n<<' ';
   while(n!=2)
   {
        if(n&1)
    {
        n = n*3+1;
        cout<<n<<' ';

          }
          else
          {
              n/=2;
              cout<<n<< ' ';

          }
   }
   cout<<1;
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

