#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int n,m;
vector<int> g[N];
bool used[N]={0};
int from[N];
void bfs(int u, int v)
{
    queue<int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        for(auto e: g[top])
        {
            if(!used[e])
            {
                used[e] = true;
                //if(e==v) return;
                from[e] = top;
                if(e==v) return;
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
    bfs(1,n);
    if(!used[n])
    {
        cout<<"IMPOSSIBLE";
    }
    else
    {
        vector<int> ans;
        ans.push_back(n);
        int res = n;
        while(res!=1)
        {
            res=from[res];
            ans.push_back(res);
        }
    reverse(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(auto e: ans)
            cout<<e<<' ';

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


