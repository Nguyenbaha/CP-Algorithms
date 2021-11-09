#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int>g[105];
bool used[105];
int n,m;
int lv[105];
void bfs(int s)
{
    queue<int> q;

    q.push(s);
    lv[s] = 0;
    used[s] = true;
    while(!q.size())
    {
        int top = q.front();
        q.pop();
        for(int i=0;i<g[top].size();++i)
        {
            if(!used[g[top][i]])
            {
                lv[g[top][i]] = lv[top] +1;
                q.push(g[top][i]);
                used[g[top][i]]=1;
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
    bfs(1);
    for(int i=0;i<10;++i)
        cout<<lv[i]<<' ';
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



