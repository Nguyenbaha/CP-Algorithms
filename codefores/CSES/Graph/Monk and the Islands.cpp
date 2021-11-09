#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
bool used[N];
vector<int> g[N];
int n,m;
int dist[N];
void bfs(int u)
{
    queue<int> q;
    used[u]=true;
    q.push(u);
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        for(auto e: g[top])
            if(!used[e])
        {

            used[e] = true;
            dist[e] = dist[top] + 1;
            q.push(e);
        }
    }
}
void Never_give_up()

{
    memset(used,0,sizeof(used));
    for(int i=0;i<N;++i)
    {
        g[i].clear();
        dist[i]=0;
    }
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    cout<<dist[n]<<endl;
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


