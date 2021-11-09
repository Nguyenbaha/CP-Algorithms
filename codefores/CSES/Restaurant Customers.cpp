#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll, ll> pii;
ll t, n, ans = LONG_MAX;
ll a[21], c[21];
void sinh(int pos, int val){
    if (pos==n) return;
    ll t1=0, t2=0;
    c[pos]=val;
    for(int i=0;i<n;i++) {
        if (c[i]) t1+=a[i];
        else t2+=a[i];
    }
    ans = min(ans,(ll)abs(t1-t2));
    sinh(pos+1,0);
    sinh(pos+1,1);
}
void solve(){
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    sinh(0,0);
    sinh(0,1);
    cout << ans;
}
int main(){
    t=1;
    while(t--){
        solve();
    }
    return 0;
}
