#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll ans=0;
    int b,p,f,h,c; cin>>b>>p>>f>>h>>c;
    if(h>c)
    {
        int q =  min(b/2,p);
        ans += q*h;
        b-=q*2;
        q = min(b/2,f);
        ans += q*c;
    }
    else
    {
        int q = min(b/2,f);
        ans += q*c;
        b-=q*2;
        q = min(b/2,p);
        ans += q*h;
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



