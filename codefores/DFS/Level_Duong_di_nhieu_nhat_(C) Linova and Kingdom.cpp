#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int a[N];
vector<vector<ll>> g;
ll n,k;ll ans=0;
ll dfs(ll node, ll parent, ll level)
{
    ll sum  =1;
    for(auto v :g[node])
    {
        if(v !=  parent)
           sum += dfs(v,node,level+1);
    }
    a[node] = level - sum;
  return sum;
}
void Never_give_up()

{
    cin>>n>>k;
    g.resize(n+1);
    for(int i=1;i<n;++i)
    {
        ll x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,0,1);
    sort(a+1,a+n+1,greater<ll>());
    for(int i=1;i<=k;++i)
        ans+=a[i];
    cout<<ans;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



