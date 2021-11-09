#include<bits/stdc++.h>
using namespace std;
int dp[30000]={0};
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n+3),f(n+3);
	f[0] = 0;
	for(int i=1;i <= n-1; ++i)
		cin >> a[i];
	//dp[i]: độ dài lớn nhất đến máy thứ i
	dp[0] = 0;
	dp[1] = 100000000;
	/*for(int i=2; i<=n; ++i)
		dp[i] = min(dp[i-1]+a[i-1],dp[i-2]+a[i-1]);
	for(int i=0;i <=n;++i)
		cout<<dp[i]<<' ';*/
	for(int i=2 ; i <= n; ++i)
		dp[i] = min(dp[i-1],dp[i-2])+a[i-1];
	cout <<dp[n];
}