#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;

const int MAX = 1e6;
const ll m = 14062008;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n,k, ans=0;
	cin >> n >> k;
	int a[n+1][n+1]{}, dp[n+1][n+1]{};
	for(int i=1; i<=n;++i){
		for(int j=1;j<=n;++j){
			cin >> a[i][j];
			dp[i][j]=a[i][j];
			dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	for(int i=k;i<=n;++i){
		for(int j=k;j<=n;++j){
			int cur = dp[i][j] + dp[i-k][j-k] - dp[i-k][j] - dp[i][j-k];
			ans=max(ans,cur);
		}
	}
	cout << ans ;
}#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;

const int MAX = 1e6;
const ll m = 14062008;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n,k, ans=0;
	cin >> n >> k;
	int a[n+1][n+1]{}, dp[n+1][n+1]{};
	for(int i=1; i<=n;++i){
		for(int j=1;j<=n;++j){
			cin >> a[i][j];
			dp[i][j]=a[i][j];
			dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	for(int i=k;i<=n;++i){
		for(int j=k;j<=n;++j){
			int cur = dp[i][j] + dp[i-k][j-k] - dp[i-k][j] - dp[i][j-k];
			ans=max(ans,cur);
		}
	}
	cout << ans ;
}