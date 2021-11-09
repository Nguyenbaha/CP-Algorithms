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
  ll a[n+2];
  a[0]=0;

  bool aa=0,mm=0;

  for(ll i=1;i<=n;++i)
  {
      cin>>a[i];

  }
 if(n==2)
 {
     sort(a+1,a+1+n);
     if(a[2]>a[1])
        cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     return;
 }
  ll last =0;
  if(a[1]==a[2])
  {

      a[1]/=2;

  }
  for(ll i=2;i<=n;++i)
  {
      if(a[i]>a[i-1])
      {
          ll cur = a[i];
          a[i] = a[i-1] + 1;
          last += (cur-a[i-1]-1);
      }
      else
      {
          a[i] = a[i] + last;
          last = 0;

      }
  }

      for(ll i=2;i<=n;++i)
  {
      if(a[i]<=a[i-1])
      {
          cout<<"NO"<<endl;
          return;
      }
  }
  cout<<"YES"<<endl;
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
