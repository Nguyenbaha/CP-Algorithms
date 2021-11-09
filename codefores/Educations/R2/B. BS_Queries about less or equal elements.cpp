#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n,m; cin>>n>>m;
int a[n];
for(int i=0;i<n;++i) cin>>a[i];
sort(a,a+n);
for(int i=0;i<m;++i)
{
    int tmp; cin>>tmp;
    int ans = upper_bound(a,a+n,tmp)-a;
    cout<<ans<<' ';
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


