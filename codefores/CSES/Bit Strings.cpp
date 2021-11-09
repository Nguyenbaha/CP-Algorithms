#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ull mod = 1e9+7;


ull pw(ull x, ull y, ull m)
{
    ull res = 1;
    x%=m;
    while(y)
    {
        if(y&1) res = (res*x)%m;
        y>>=1;
        x=(x*x)%m;
    }
    return res;

}
void Never_give_up()

{
    ull n; cin>>n;
    cout<<pw(2,n,mod);
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


