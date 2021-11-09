#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 1e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
bool used[N]={0};
vector<int> g[N];
int x,y,n,m,k,ans=0;
void dfs(int s)
{
    used[s] = true;
    for(int &i: g[s])
    {
        if(!used[i])
        {
             dfs(i); //ans++;
        }
    }
}
void Never_give_up()

{
    cin>>n>>m;
    for(int i=0;i<m;++i)
    {
        cin>>x>>y;//x--;y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    cin>>k;

    dfs(k);
    for(int i=0;i<n;++i)
    {
        if(!used[i]) ans++;
    }
    cout<<n-ans-1;
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



