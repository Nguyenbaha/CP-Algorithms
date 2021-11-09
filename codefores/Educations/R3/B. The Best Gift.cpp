#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n,m; cin>>n>>m;
int cnt[N];
for(int i=1;i<=n;++i)
{
    int x; cin>>x;
    cnt[x]++;
}
int ans=0;
for(int i=1;i<=m;++i)
    for(int j=1;j<i;++j)
    ans += cnt[i]*cnt[j];
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



