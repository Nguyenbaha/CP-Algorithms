#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
 int n,m;
 int res=0;
 char a[105][105];
 bool used[105][105];
 int X[]={-1,-1,-1,0,0,1,1,1};
 int Y[]={-1,0,1,-1,1,-1,0,1};
 void dfs(int i,int j)
 {
     used[i][j] = true;
     for(int l=0;l<8;++l)
     {
         int x = i + X[l];
         int y= j+Y[l];
         if(x>=0 && y>=0 && x<n && y<m && a[x][y]=='W' && !used[x][y])
            dfs(x,y);
     }
 }
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
    memset(used,false,sizeof(used));
    cin>>n>>m;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        cin>>a[i][j];
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        if(a[i][j]=='W' && !used[i][j])
           {
               dfs(i,j);
                res++;
           }
           cout<<res;
 return 0;
}



