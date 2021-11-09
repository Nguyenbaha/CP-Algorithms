#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
char a[505][505];
bool used[505][505]={0};
int pos[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int n,m,k,s=0,cnt=0;
//bool valid(int x, int y)
//{
//    return x>=0 && y>=0 && x<n && y<m && !used[x][y] && g[x][y]=='.' ;
//}
bool valid(int x, int y)
{
        if(x>=n || y>=m || x<0 || y<0) return false;
        if(used[x][y]) return false;
        if(a[x][y]=='#') return false;
        return true;
}
void dfs(int i, int j)
{
    if(s-k-cnt==0) return;
    if(a[i][j]=='.') cnt++;
    for(auto p: pos)
    {
        int toX = i + p[0];
        int toY = j + p[1];
        if(valid(toX,toY))
            dfs(toX,toY);
    }
}
void Never_give_up()

{
    cin>>n>>m>>k;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
    {
           cin>>a[i][j];
           if(a[i][j]=='.') s++;
           else used[i][j] = true;
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(a[i][j]=='.')
            {
                dfs(i,j); break;
            }
        }
    }

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(!used[i][j])
            {
                a[i][j]=='X';
            }
            cout<<a[i][j];
        }
        cout<<endl;
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


