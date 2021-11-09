#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
ll n; cin>>n;
int f[32];
for(int i=0;i<32;++i)
    f[i] = 1<<i;
ll j=0,s=0;
for(int i=0;i<=n;++i)
    if(f[j]==i) s-=f[j],j++;
else s+=i;
cout<<s<<endl;
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



