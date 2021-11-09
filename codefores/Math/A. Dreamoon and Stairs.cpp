#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n,m; cin>>n>>m;
if(n<m ) cout<<-1;
//else if(n==m) cout<<1;
else
{ int ans=-1;
    int tmp = (n+1)>>1;
    for(int i=tmp;i<=n;++i)
        if(i%m==0) {ans=i;break;}
   cout<<ans;
   }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests=1;
//cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}


