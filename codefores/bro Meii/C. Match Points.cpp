#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

ll n,z,ans=0,p;
void Never_give_up()

{
    cin>>n>>z;
    ll a[N];
    for(ll i=1;i<=n;++i)cin>>a[i];
    sort(a+1,a+1+n);
    //for(int i=1;i<=n;++i)cout<<a[i]<<' ';
   // cout<<endl;
    ll l=1, r = n/2+1;
    for(ll i=r;i<=n && l<=n/2 ;++i)
    {
        if(abs(a[i]-a[l]) >= z) {ans++;l++;}
        //++r;
    }
    cout<<ans;
    //5 7 8 9 10
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);




Never_give_up();


 return 0;
}



