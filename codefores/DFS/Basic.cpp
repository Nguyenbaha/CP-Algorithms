#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int> g[10];
bool visted[10]={0};
int nodes,edges,x,y,ans=0;

//void init()
//
//{
//    for(int i=0;i<10;++i)
//    {
//        visted[i]=0;
//    }
//}

void dfs(int s)
{
    visted[s] = true;
   for(auto &i: g[s])
   {
      if(!visted[i])
      {
          visted[i]=1;
          dfs[i];
      }
   }
}
void Never_give_up()

{
    cin>>nodes>>edges;
    //init();
    for(int i=0;i<edges;++i)
    {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
    }
    for(int i=0;i<nodes;++i)
    {
        if(!visted[i])
        {
            ans++; dfs(i);
        }

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


