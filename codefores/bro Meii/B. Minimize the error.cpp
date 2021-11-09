#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll n,k1,k2;

void Never_give_up()

{

    cin>>n>>k1>>k2;
    ll res =0,k=k1+k2;
 ll c[N],a[N],b[N];
  for(int i=1;i<=n;++i) cin>>a[i];
   for(int i=1;i<=n;++i) {cin>>b[i]; c[i] = abs(a[i]-b[i]); res +=c[i];}
   if(res - k == 0)
   {
       cout<<0; exit(0);
   }
   else
    if(k>res)
   {
       k-=res;
       if(k&1) {cout<<1; exit(0);}
       else  {cout<<0;exit(0);}
   }
   else if(k < res)
   {
       sort(c+1,c+1+n);
       while(k--)
       {
            c[n]--;
            sort(c+1,c+1+n);
       }
   }
   res =0;
   for(int i=1;i<=n;++i) res += c[i]*c[i];
   cout<<res;


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


