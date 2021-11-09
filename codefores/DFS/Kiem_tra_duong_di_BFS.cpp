#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
bool ok[N];
int truoc[1005];
vector<int> g[N];
int n,m,x,y;

    void bfs(int u,int v)
    {
        queue<int> q;
        while(q.size()>0)
        {
            int top= q.front(); q.pop();
            ok[top] = true;
            if(top==v)
            {
                cout<<"YES\n";
                return;
            }
            for(int i=0;i<g[top].size();++i)
            {
                if(!ok[g[top][i]])
                {
                    ok[g[top][i]] = true;
                    truoc[g[top][i]] = top;
                    q.push(g[top][i]);
                }

            }

        }
        cout<<"NO\n";
    }
void Never_give_up()

{
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

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


