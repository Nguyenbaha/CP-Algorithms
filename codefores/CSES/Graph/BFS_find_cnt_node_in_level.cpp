#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int> g[N];
bool used[N]={0};
int lv[N];

void bfs(int k)
{
    queue<int> q;
    int ans=0;
    q.push(1);
    lv[1]=1;
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        used[top] = true;
        int sz = g[top].size();
        for(int i=0;i<sz;++i)
        {
            if(!used[g[top][i]])
            {
                lv[g[top][i]] = lv[top] + 1;
                if(lv[g[top][i]]==k)
                    ans++;
                q.push(g[top][i]);
            }
        }
    }
    cout<< ans;
}
void Never_give_up()

{
    int node,a;
    cin>>node;
    for(int i=0;i<node-1;++i)
    {
        int x,y; cin>>x>>y; //x--,y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cin>>a;
    bfs(a);
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


