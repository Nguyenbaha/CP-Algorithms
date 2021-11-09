#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here
 deque<int> q;
 int n,x;
 ll s=0;
void sol()
{

   cin>>n>>x;


  for(int i=0;i<n;++i)
  {
    int t;
    cin>>t; s+=t;
    q.push_back(t);
  }
   while(!q.empty())
  {
    int t=q.front();
    //s+=t;
    if(t%x != 0)
    {
        break;
    }
    else
    {
        q.pop_front();
       for(int i=0;i<x;++i)
       {
           q.push_back(t/x);
           s+=t/x;
       }
       // continue;
    }
  }
   cout<<s<<endl;
   q.clear();
   s=0;
//    ll t= 1<<3;
//    cout<<t;
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
