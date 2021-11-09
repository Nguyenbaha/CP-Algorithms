#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
   ll n,res=0;
   cin>>n;
   res = n*(n+1)/2;
   if(res&1) { cout<<"NO"; return;}
   cout<<"YES"<<endl;
   vector<ll> ans1,ans2;
   res/=2;
  while(n!=0)
   {
       if(res-n>=0)
       {
           res-=n;
           ans1.push_back(n);

       }else
       {
           ans2.push_back(n);
       }
        n--;
   }
   cout<<ans1.size()<<endl;
   for(auto e: ans1)cout<<e<<' ';
   cout<<endl;
   cout<<ans2.size()<<endl;
   for(auto e: ans2)cout<<e<<' ';
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


