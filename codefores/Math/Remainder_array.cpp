#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
ll ans=0,n,k,F=0;
map<int,int> mp;
cin>>n>>k; int a[n];
for(int i=1;i<=n;++i)
{
    cin>>a[i];
    if(a[i] % k)
        mp[k-a[i]%k]++;
}
for(auto e: mp)
   ans = max(ans,e.first+(e.second-1)*k+1);
cout<<ans<<endl;
//mp.clear();
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


