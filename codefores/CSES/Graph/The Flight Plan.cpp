#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int>g[N];
bool used[N]={0};
int from[N];
int n,m,t,c;


void bfs(int u,int e)
{
    queue<int> q;
    used[u] = true;
    q.push(u);
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        for(auto el: g[top])
        {
            if(!used[el])
            {
                used[el] = true;
                from[el] = top;
                if(e==el) return;
                q.push(el);
            }
        }
    }
}
void Never_give_up()

{
    cin>>n>>m>>t>>c;
    if(n==1)
    {
        cout<<"1\n1"; return;
    }
    for(int i=0;i<m;++i)
    {
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=0;i<m;++i)
    {
        sort(g[i].begin(),g[i].end());
    }
    int s,e; cin>>s>>e;
    bfs(s,e);
    vector<int> ans;
    ans.push_back(e);
    int res = from[e];
    while(res != s)
    {
        ans.push_back(res);
        res = from[res];
    }
    ans.push_back(s);
    cout<<ans.size()<<endl;
    reverse(ans.begin(),ans.end());
    for(auto e : ans) cout<<e<<' ';
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
