#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

//here
char g[1005][1005];
bool used[1005][1005]={0};
int n,m;
int ans=0;

int pos[4][2]={{0,1},{1,0},{0,-1},{-1,0}};

bool valid(int x, int y)
   {
       return x>=0 && y>=0 && x<n && y<m && !used[x][y] && g[x][y]=='.' ;
   }

void dfs(int x,int y)
 {

    used[x][y] = true;
    for(auto p: pos)
    {
        int toX = x + p[0];
        int toY = y + p[1];
        if(valid(toX,toY))
            dfs(toX,toY);
    }
 }
void Never_give_up()

{
    cin>>n>>m;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
       {
           cin>>g[i][j];
           if(g[i][j]=='#')
            used[i][j]=true;
        }
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        if(g[i][j]=='.' && !used[i][j])
    {
        dfs(i,j);
        ans++;
    }
    cout<<ans;

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



