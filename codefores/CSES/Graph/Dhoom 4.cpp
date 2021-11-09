#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll g[N];
bool used[N]={0};
ll n,m,k,ans=0;
ll dist[N];
const int mod = 100000;
ll flag=0;
void bfs(ll x, ll y, ll z)
{
    queue<int> q;
    q.push(x);
    dist[x]=0;
    used[x] =true;
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        for(int i=0;i<z;++i)
        {
            int tmp = (top*g[i])%mod;
            if(!used[tmp])
            {
                dist[tmp] = dist[top] + 1;
                ans = dist[top]+1;
                if(tmp==y)
                {
                    flag=1;
                    return;
                }
                used[tmp] = true;
                q.push(tmp);
            }
        }
    }
}
void Never_give_up()

{
    cin>>n>>m>>k;
    for(int i=0;i<n;++i)
        cin>>g[i];
    if(n==m)
    {
        cout<<0<<endl;
        return;
    }
    bfs(n,m,k);
    if(flag)
        cout<<ans<<endl;
    else cout<<-1<<endl;

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


