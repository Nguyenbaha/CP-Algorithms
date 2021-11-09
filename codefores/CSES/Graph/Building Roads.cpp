#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int>g[N];
bool used[N];
int n,m;
void dfs(ll u)
{
    used[u]=1;
   for(ll v: g[u])
    if(!used[v])
    dfs(v);
}
void Never_give_up()

{
    cin>>n>>m;
    for(ll i=0;i<m;++i)
    {
        int x,y; cin>>x>>y;x--,y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(0);
    ll ans=0;
    vector<ll> a;
    for(ll i=1;i<n;++i)
    {
        if(!used[i])
        {
            a.push_back(i);
            dfs(i);
        }
    }
    cout<<a.size()<<endl;
    for(ll i=0;i<a.size();++i)
    {
        cout<<1<<' '<<a[i]+1<<endl;
    }
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


