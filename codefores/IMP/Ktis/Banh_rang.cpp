#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll n,m; cin>>n>>m;
    ll g=__gcd(n,m);
    ll l=(n*m)/g;
    ll s = n+m;
    if(l==n){ cout<<l-n<<endl;}
    else if(l==m) { cout<<l-m<<endl;}
    else
        cout<<l-s<<endl;
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


