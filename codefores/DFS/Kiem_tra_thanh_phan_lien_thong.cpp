#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

vector<int> g[N];
vector<bool>used(N,false);
int n,m;
void dfs(int u)
{
    used[u] = true;
    for(int i: g[u])
        if(!used[i])
            dfs(i);
}
void Never_give_up()

{
    ll ans=0;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int x,y; cin>>x>>y; --x,--y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=0;i<n;++i)
    {
        if(!used[i]) ans++,dfs(i);
    }
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



