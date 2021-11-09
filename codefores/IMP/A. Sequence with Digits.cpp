#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

ll proc(ll n)
{
    ll m1=INT_MAX,m2=INT_MIN;
    while(n>0)
    {
        ll t=n%10;
        n/=10;
        m1=min(m1,t);
        m2=max(m2,t);
    }
    return m1*m2;
}
void Never_give_up()

{
    ll x,y;
    cin>>x>>y;
    y--;
    ll ans=x;
    while(y--)
    {
        ll tmp = proc(ans);
        if(tmp==0) break;
        ans+=tmp;
    }
    cout<<ans<<endl;
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


