#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll x,y; cin>>x>>y;
    if(x<y)
    {
        if(y&1)
        {
            ll res = y*y;
            ll ans = res - x +1;
            cout<<ans<<endl; return;
        }
        else
        {
            ll res = (y-1)*(y-1);
            ll ans = res + x;
            cout<<ans<<endl; return;
        }
    }
    else
    {
        if(x&1)
        {
            ll res = (x-1)*(x-1);
            ll ans = res + y;
            cout<<ans<<endl; return;
        }
        else
        {
            ll res = x*x;
            ll ans = res - y + 1;
            cout<<ans<<endl; return;
        }
    }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



