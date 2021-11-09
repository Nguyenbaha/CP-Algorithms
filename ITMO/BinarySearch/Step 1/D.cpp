//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long ll;
// #define prec(n) fixed<<setprecision(n)
//const int N = 2e5+5 ;
////😁😁😁😁😁😁😁😁😁😁😁
//// @ by HaNguyen -- 2021---
////here
//ll n,k;
//vector<ll> a;
//ll bs(ll t)
//{
//    ll l=0,r=n-1,mid;
//    while(l<=r)
//    {
//        mid =(l+r)/2;
//        if(a[mid] <= t)
//        {
//
//            l =mid+1;
//        }
//
//        else  r = mid -1;
//    }
//    return l;
//}
//ll bs2(ll t)
//{
//    ll l=0,r=n-1,mid,ans;
//    while(l<=r)
//    {
//        mid =(l+r)/2;
//        if(a[mid]>= t)
//        {
//            r=mid-1;
//        }
//
//        else l=mid+1;
//    }
//    return r;
//}
//void sol()
//{
//   cin>>n;
//   for(ll i=0;i<n;++i)
//   {
//       ll t;
//       cin>>t;
//       a.push_back(t);
//   }
//   sort(a.begin(),a.end());
//   cin>>k;
//   while(k--)
//   {
//       ll l,r;
//       cin>>l>>r;
//       cout<<abs(bs2(l)-bs(r))-1<<' ';
//   }
//}
//
//signed main() {
//ios::sync_with_stdio(false);
//cin.tie(0);
//
//int tc=1;
////cin >> tc;
//while(tc--)
//{
//    sol();
// }
//
// return 0;
//}
//
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
    cin>>n;
    vector<ll>a(n);
    for(auto &i:a)cin>>i;
    sort(a.begin(),a.end());
    cin>>k;
    while(k--)
    {
        ll l,r;
        cin>>l>>r;
        ll res = lower_bound(a.begin(),a.end(),l)-a.begin();
        ll ans = upper_bound(a.begin(),a.end(),r)-a.begin()-1;

        cout<<ans-res+1<<' ';
    }
 }

 signed main() {
 ios::sync_with_stdio(false);
 cin.tie(0);

 int tc=1;
// cin >> tc;
 while(tc--)
 {
     sol();
  }

  return 0;
 }
