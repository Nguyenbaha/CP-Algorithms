#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll ans = 0 ;
    int n,m; cin>>n>>m;
    char g[505][505];

    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
    {
        cin>>g[i][j];
        if(g[i][j]=='*') ans++;
    }
    if(abs(n-m)>=2){
    for(int i=0;i<n;++i)
    {
        int cnt =0;
        for(int j=0;j<m;++j)
            if(g[i][j]=='*' && g[i][j+1]=='*'&&g[i][j+2]=='*')
            cnt++;
        ans+=cnt;
    }}
    int res1 = 0,res2=0;
    for(int i=0;i<n;++i)
    {
        int cnt=0;
        for(int j=0;j<m;++j)
            if(g[i][j]=='*') cnt++;
        if(cnt==m) res1++;
    }
      for(int j=0;j<m;++j)
      {
          int cnt  =0 ;
          for(int i=0;i<n;++i)
            if(g[j][i]=='*') cnt++;

          if(cnt==n) res2++;
      }
    ans += res1*res2;
    cout<<ans<<endl;
    }

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
Never_give_up();
 }

 return 0;
}


