#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

vector<int> g[N];
bool used[N];
int m,n,k;
void dfs(int u)
{
    used[u] = true;
    cout<<u<<' ';
    for(int i: g[u])
    if(!used[i]) dfs(i);
}
void Never_give_up()

{
    cin>>n>>m>>k;
    for(int i=0;i<10005;++i)
        g[i].clear();
    memset(used,false,sizeof(used));
    for(int i=0;i<m;++i)
    {
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(k);
    cout<<endl;
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



