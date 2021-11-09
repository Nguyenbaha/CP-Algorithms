#include <bits/stdc++.h>
using namespace std;


// in cac dinh dc duyet boi bfs
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int> g[1005];
bool used[1005]={0};
int n,m,k;
void bfs(int u)
{
    queue<int> q;
    q.push(u);
    while(q.size())
    {
        int top = q.front();
        cout<<top<<' ';
        q.pop();
        used[top] = true;
        for(int i=0;i<g[top].size();++i)
        {
            if(!used[g[top][i]])
            {
                used[g[top][i]]=true;
                q.push(g[top][i]);

            }
        }
    }

}
void Never_give_up()

{
    cin>>n>>m>>k;
    for(int i=0;i<m;++i)
    {
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(k);
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


