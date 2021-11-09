#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll n; cin>>n;
    vector<ll> a(n-1),b(n+1);
    for(int i=0;i<n-1;++i )cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<=n;++i) b[i] =i+1;
    if(a[n-1-1] != n){cout<<n; return;}
    for(int i=0;i<n-1;++i)
        if(a[i]!=b[i])
    {
        cout<<b[i]; break;
    }
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


