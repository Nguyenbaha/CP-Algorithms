#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int> adj[100005];
int d[10005];
void ha()
{ // ê, sách thầy đừng share với ngoài trường, đến tai thầy thì không hay
    // trước a Sơn với thầy Huy có bảo ấy
int u,v,i;
queue<int> que;
que.push(1);
d[1]=1;
que.pop();
while(que.size())
{
    u=que.front();
    que.pop();
    for(int i=0;i<que.size();++i)
    {
        int j= adj[u][i];
        if(d[j]==0)
        {
            //
            d[j] = d[u] + 1;
            que.push(j);
        }
    }
}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int n,m; cin>>n>>m;
for(int i=0;i<m;++i)
{
    int x,y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
ha();
for(int i=1;i<=n;++i) cout<<i<<' ';
cout<<endl;
for(int i=1;i<=n;++i) cout<<d[i]<<' ';
return 0;
}





