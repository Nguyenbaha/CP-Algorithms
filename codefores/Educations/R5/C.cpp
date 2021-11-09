#include <bits/stdc++.h>
using namespace std;
string arr[1001];
int vis[1001][1001];
int n,m;
int vis_t=0;
int cnt[1000010]={0};
bool valid (int i,int j)
{
	return (i>=0 && i<n && j>=0 && j<m && !vis[i][j] && arr[i][j]!='*');
}
void dfs(int i,int j)
{
	if (!valid(i,j)) return ;
    vis[i][j]=vis_t;
    cnt[vis_t]++;
    dfs(i,j+1);
    dfs(i+1,j);
    dfs(i,j-1);
    dfs(i-1,j);
}
int main()
{memset(vis,0,sizeof(vis));
	cin>>n>>m;
	for (int i=0;i<n;i++)
	cin>>arr[i];
for (int i=0;i<n;i++)
	for (int j=0;j<m;j++)
	{if (vis[i][j]|| arr[i][j]=='*') continue;
		vis_t++;
	dfs(i,j);
	}
for (int i=0;i<n;i++)
{	for (int j=0;j<m;j++)
	{if (arr[i][j]=='.')
		{printf(".");
		continue;
		}
	set<int> st;
	if (i>0 && arr[i-1][j]=='.') {st.insert(vis[i-1][j]);}
	if (j>0 && arr[i][j-1]=='.'){st.insert(vis[i][j-1]);}
	if (i+1<n && arr[i+1][j]=='.') {st.insert(vis[i+1][j]);}
	if (j+1<m && arr[i][j+1]=='.') {st.insert(vis[i][j+1]);}
	int sum=0;
	for (set<int>::iterator it=st.begin();it!=st.end();it++)
	{sum+=cnt[*it];
	}
	printf("%d",(sum+1)%10);
	}
printf("\n");}
}
