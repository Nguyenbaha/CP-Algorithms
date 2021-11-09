#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
ll x,y,a,b; cin>>x>>y>>a>>b;
// 3 5 21
// 3 5  5*5 + 2*3
    if(x<y) swap(x,y);
    if(2*a<=b) cout<<a*(x+y)<<endl;
    else {
        ll ans = b*y + abs(x-y)*a;
        cout<<ans<<endl;
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



