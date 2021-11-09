#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int col [] = {0,1,1,1,0,-1,-1,-1};
int row [] = { 1,1,0,-1,-1,-1,0,1};
int n,m;
int troops=0,mx=0;
int g[1005][1005];

void bfs(int y, int x)
{
    g[y][x] = 2;
    queue<pii> q;
    q.push({y,x});
    int cnt=1;
    while(!q.empty())
    {
        int topY = q.front().first;
        int topX = q.front().second;
        q.pop();
        for(int i=0;i<8;++i)
        {
            int toY = topY + col[i];
            int toX = topX + row[i];
            if(toY >= 0 && toX >= 0 && toY<n && toX<m)
            {
                g[toY][toX]=2;
                q.push({toY,toX});
                cnt++;
            }
        }
    }
    if(cnt > troops)
        troops = cnt;
}
void Never_give_up()

{
    cin>>n>>m;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        cin>>g[i][j];
    mx=0; troops=0;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
    {
        if(g[i][j]==1)
        {
            bfs(i,j);
            mx++;
        }
    }
    cout<<mx<<' '<<troops<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int,int> pii;
//const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
//int col[] ={0,1,1,1,0,-1,-1,-1};
//int row[] = {1,1,0,-1,-1,-1,0,1};
//int troops = 0, mx=0;
//int n,m;
//int g[1004][1004];
//void bfs(int y, int x)
//{
//    queue<pii> q;
//    g[y][x] = 2;
//    q.push({y,x});
//    int cnt=1;
//    while(!q.empty())
//    {
//        int topY = q.front().first;
//        int topX = q.front().second;
//        q.pop();
//        for(int i=0;i<8;++i)
//        {
//            int toY = topY + row[i];
//            int toX = topX + col[i];
//            if(toY >=0 && toY<n && toX>=0 && toX<m)
//            {
//                if(g[toY][toX]==1)
//                {
//                    g[toY][toX] = 2;
//                    q.push({toY,toX});
//                    cnt++;
//                }
//            }
//        }
//    }
//    if(cnt > troops )
//        troops = cnt;
//}
//void Never_give_up()
//
//{
//    cin>>n>>m;
//    mx=0; troops = 0;
//    for(int i=0;i<n;++i)
//        for(int j=0; j<m;++j)
//        cin>>g[i][j];
//    for(int i=0;i<n;++i)
//        for(int j=0;j<m;++j)
//    {
//        if(g[i][j]==1)
//        {
//            bfs(i,j);
//            ++mx;
//        }
//    }
//    cout<<mx<<' '<<troops<<endl;
//
//}
//
//signed main() {
//ios::sync_with_stdio(false);
//cin.tie(0);
//
//int tc;
//cin >> tc;
//for (int iTest = 0; iTest <tc; ++iTest)
// {
//Never_give_up();
// }
//
// return 0;
//}



