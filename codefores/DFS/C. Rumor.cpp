#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

int pos[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
char g[1005][1005];
bool used[1005][1005]={0};
int s[N];
int n,m;int k;
bool valid(int x,int y)
{
    return x>=0 && y>=0 && x<n && y<m && g[x][y]=='.' ;
}
int dfs(int i,int j)
{
    if(!valid(i,j)) return 0;
    used[i][j]=k;
        int sum = 1;
    for(auto p: pos)
        {
            int toX = i+p[0];
            int toY = j+p[1];
            if(valid(toX,toY))
                sum += dfs(toX,toY);
        }
    return sum;
}
void Never_give_up()

{
    cin>>n>>m;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        cin>>g[i][j];
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
         s[++k] = dfs(i,j);
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        if(g[i][j]=='*')
    {
        set<int> st;
        for(auto p:pos)
        st.insert(used[i+p[0]][j+p[1]]);

            int tmp = 1;
            for(auto e: st) tmp +=s[e];
            g[i][j]='0' + (tmp%10);
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cout<<g[i][j];
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


