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
    ll n;cin>>n;
    vector<ll> ans1,ans2;
    ll tmp = n*(n+1)>>1;
    if(tmp&1)
    {
        cout<<"NO"; return;
    }
    cout<<"YES"<<endl;
    tmp/=2;
    for(int i=n;n>=1;--i)
    {
        if(tmp -n >=0) ans1.push_back(n),tmp-=n;
        else ans2.push_back(n);
        n--;
    }
       cout<<ans1.size()<<endl;
   for(auto e: ans1)cout<<e<<' ';
   cout<<endl;
   cout<<ans2.size()<<endl;
   for(auto e: ans2)cout<<e<<' ';
//    ll n;
//    cin>>n;
//    ll tmp = n*(n+1)>>1;
//    if(tmp & 1)
//    {
//        cout<<"NO";
//        return;
//    }
//    cout<<"YES"<<endl;
//    vector<int> a(n+1);
//    for(int i=1;i<=n;++i)
//        a[i] = i;
//    tmp /= 2;
//   // cout<<tmp; return;
//    vector<int> b,c;
//
//    for(int i =n; i>=1;i--)
//    {
//        if(tmp - i >=0)
//        {
//            b.push_back(i);
//            tmp -= i;
//        }
//        else
//        {
//            if(tmp==0) break;
//
//            b.push_back(tmp);
//           break;
//        }
//
//    }
//  int j=0;
//      cout<<b.size()<<endl;
//    for(auto e: b)
//        cout<<e<<' ';
//        cout<<endl;
// sort(b.begin(),b.end());
//  for(int i=1;i<=n;++i)
//  {
//      if(i < b[j]) c.push_back(i);
//      else if(i == b[j]) j++;
//      else
//      {
//           c.push_back(i);
//      }
//  }
//   //sort(b.begin(),b.end(),greater<int>());
//
//      sort(c.begin(),c.end(),greater<int>());
//        cout<<c.size()<<endl;
//        for(auto e: c)
//            cout<<e<<' ';
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
