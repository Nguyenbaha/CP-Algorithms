#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
   double n,m; cin>>n>>m;
   double mx=-1,ans=0;

   for(int i=1;i<=n;++i)
   {
       double a; cin>>a;
       double tmp = ceil(a/m);
       if(tmp>=mx)
        ans=i,mx=tmp;
   }
   cout<<ans;
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



