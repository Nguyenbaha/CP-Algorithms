#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int> g[2001];
vector<bool> used(N,false);
int ans=-1,n;
//int a[N];
void dfs(int v,int lv)
{
    ans = max(ans,lv);
    //used[v] = true;
   for(int i=0;i<g[v].size();++i)
    dfs(g[v][i],lv+1);

}
void Never_give_up()

{

   cin>>n;
  int a[n];
 for(int i=1;i<=n;++i)
 {
     cin>>a[i];
     if(a[i]!=-1) g[a[i]].push_back(i);
     else g[0].push_back(i);
 }
 for(int i=0;i<g[0].size();++i)
    dfs(g[0][i],1);
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


