#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
bool used[N];
vector<int> g[N];
int dist[N];
int n,m;
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    dist[u] = 0;
    used[u] = true;
    while(!q.empty())
    {
        int top= q.front();
        q.pop();
        for(int e: g[top])
        {
            if(!used[e])
            {
                dist[e] =  dist[top] + 1;
                used[e] = true;
                q.push(e);
            }
        }
    }
}
void Never_give_up()

{
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int t; cin>>t;
    vector<int> ans;
    while(t--)
    {
        int cnt=0;
       // memset(used,0,sizeof(used));
        for(int i=0;i<N;++i)
        used[i]=0,dist[i]=0;
        int a,b;
        cin>>a>>b;
        bfs(a);
        for(int i=0;i<n;++i)
            if(dist[i]==b) cnt++;
        ans.push_back(cnt);
    }
   for(auto e: ans)
        cout<<e<<endl;
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



