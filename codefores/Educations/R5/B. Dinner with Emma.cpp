#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n,m; cin>>n>>m;
int ans=0;
for(int i=0;i<n;++i)
{
    int res = INT_MAX;
    for(int j=0;j<m;++j)
    {
        int t; cin>>t;
        res = min(res,t);
    }
    ans = max (ans,res);
}
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



