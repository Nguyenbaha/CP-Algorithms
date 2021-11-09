#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n; cin>>n;
int cnt[n],a[n];
for(int i=1;i<=n;++i)
{
    cin>>a[i];
    cnt[a[i]]=i;
}
ll ans=0;
for(int i=2;i<=n;++i)
    ans+=abs(cnt[i]-cnt[i-1]);
cout<<ans;
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



