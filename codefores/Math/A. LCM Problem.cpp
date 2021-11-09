#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
ll x,y; cin>>x>>y;
if(y%x==0 && x<y) cout<<x<<' '<<y<<endl;
else if(x-y ==0) cout<<-1<<' '<<-1<<endl;
else
{
    ll ans = 2*x;
    if(ans<=y) cout<<x<<' '<<ans<<endl;
    else cout<<-1<<' '<<-1<<endl;
}

}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests;
cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}



