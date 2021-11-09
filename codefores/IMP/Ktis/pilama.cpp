#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

ll pow(ll a,ll n)
{
    ll ans=1;
    while(n)
    {
        if(n&1) ans = ans*a;
        a=a*a;
        n>>=1;
    }
    return ans;
}
void Never_give_up()

{
   ll n; cin>>n;
   ll res = pow(2,n);
   res++;
   ll ans = res*res;
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




