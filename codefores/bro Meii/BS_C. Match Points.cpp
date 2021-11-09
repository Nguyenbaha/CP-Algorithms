#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

int n,z,ans=0,p;
int a[N];
bool ok(int mid)
{
    for(int i=1;i<=mid;++i)
    {
        if(abs(a[i] - a[n-mid+i]) < z) return 0;
    }
    return 1;
}

void Never_give_up()

{
   cin>>n>>z;
   for(int i=1;i<=n;++i)cin>>a[i];
   sort(a+1,a+1+n);
   int l=1,r=n/2;
   // Tim nhi phan
   while(l<=r)
   {
       int mid = (l+r)>>1;
       if(ok(mid))
          {
              ans = mid;
              l = mid +1;
          }
        else r = mid-1;
   }
   cout<<ans;

}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);




Never_give_up();


 return 0;
}



