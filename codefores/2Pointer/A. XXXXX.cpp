#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
    int n,x; cin>>n>>x;
    int a[n];
    int f[n]; f[0]=0;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        f[i] = f[i-1] + a[i];
    }
    int res = -1; int tmp=-1;
    if(f[n]%x) cout<<n<<endl;
    else {
    for(int i=1;i<=n;++i)
    {
        if(f[i]%x) res = max(res,max(n-i,i));

    }
    cout<<res<<endl;
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


