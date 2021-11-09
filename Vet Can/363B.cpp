#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >>  n>> k;
	int a[n+6],dp[n+6];
	dp[0] = 0;
	for(int i=1; i<= n; ++ i)
	{
		cin >> a[i];
		dp[i] = dp[i-1] + a[i];
	}
	int mn = dp[n], pos = 1;
	for(int i=1; i<=n-k+1; ++i)
	{
		int res = dp[i+k-1] - dp[i-1];
		if(mn > res)
		{
			mn = res;
			pos =  i;
		}
	}
	cout <<pos;
}