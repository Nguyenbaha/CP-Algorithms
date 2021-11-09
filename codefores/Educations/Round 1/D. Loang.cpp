#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int x,y,n,m,k,i,ans;
int used[1001][1001];
char c[1001][1001];
int flag[100001];
void loang(int x, int y)
{
    if(x==0 || y==0 || x==n+1 || y==m+1) return;
    if(used[x][y]) return;
    if(c[x][y] =='*')  {ans++; return;}
    used[x][y] = i;
    loang(x+1,y);
    loang(x-1,y);
    loang(x,y+1);
    loang(x,y-1);
    return;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

// here
cin>>n>>m>>k;
for(i=1;i<=n;++i)
    for(int j=1;j<=m;++j)
        cin>>c[i][j];

for(i=1;i<=k;++i)
    {
        cin>>x>>y;
        ans =0;
        if(!used[x][y]) loang(x,y);
        else ans = flag[used[x][y]];
        flag[i] =  ans;
        cout<<ans<<endl;
    }
 return 0;
}


