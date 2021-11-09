#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	int mod = 14062008;
	cin >> n>> k;
	vector<int> a(k+6);
	for(auto &e: a)
		cin >> e;
	vector<int> dp(n+1,0);
	dp[0]=0;
	dp[1] = 1;
	int j=0;

	//dp[i]: so cach di den bac thu i
	for(int i=2;i <= n; ++i)
	{
		if(i == a[j])
			dp[i] = 0, j++;
		else dp[i] = (dp[i-1]+dp[i-2])%mod;
	}
	cout << dp[n];















































}