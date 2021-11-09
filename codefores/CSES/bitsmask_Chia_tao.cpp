#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll ans = INT_MAX , s=0;

    ll n; cin>>n;
    ll a[n];
    for(ll i=0;i<n;++i)
        cin>>a[i],s+=a[i];
    for(ll i=0;i< 1<<n;++i)
    {
        ll scur=0;
        for(ll j=0; j<n;++j)
            if(i & (1<<j))
            scur += a[j];
        ll tmp = abs((s-scur)-scur);
        ans = min(ans,tmp);
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


