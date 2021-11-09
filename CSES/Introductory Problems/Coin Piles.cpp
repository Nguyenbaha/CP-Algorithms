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
   int n;
   cin>>n;
   while(n--)
   {
       ll l,r;
       cin>>l>>r;
       if(l>r) swap(l,r);
       if((l+r)%3==0 && 2*l >= r)
       {
           cout<<"YES"<<endl;
       }
       else cout<<"NO"<<endl;

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

