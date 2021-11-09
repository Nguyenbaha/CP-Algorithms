#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int n;
vector<int> g[N];
vector<bool> used(N,false);
vector<int> a(N);
void dfs(int v)
{
    if(!used[v]) cout<<v<<' ';
    used[v] = true;
    for(int u: g[v])
        if(!used[u])
            dfs(u);
}
void Never_give_up()

{
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;++i)
    {
        if(!used[a[i]])
            dfs(a[i]);
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



