#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int> g[N];
vector<bool> used(N,false);
int ans=0,n;
void dfs(int v)
{
    used[v] = true;
    for(auto i: g[v])
        if(!used[i])
    {
        ans++; dfs(i);
    }
}
void Never_give_up()

{

  int n; cin>>n;
  while(n--)
  {
      int x; cin>>x; if(x!=-1)dfs(x);
  }

  cout<<ans;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc=1;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


