#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
ll n; cin>>n;
ll f[32]; int k=0;
for(int i=0;i<32;++i)
    f[i] = 1<<i;
    ll res=0;
for(int i=0;i<32;++i)
     {  // n 19
         if(f[i]== n) {res = f[i]; k=i; break;}
         else if(f[i] >n) { res = f[i-1]; k=i-1; break;}
     }

ll ans = n*(n+1)>>1;
// 1 2 3 4 - 2 4 1
// 1 2 3 4 5
// 1 2 3 4 10  -7 3-7
//-1 -2 3 -4 -7
ll tmp=0;
for(int i=0;i<=k;++i) tmp-=1<<i;
ll r = tmp;
cout<<ans+2*r<<endl;
//cout<<s<<endl;

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



