#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m,k;
	cin >>  n>> m>> k;
	int dp[n+m+k+6]={0};
	for(int i=1; i <= n; ++i)
		for(int j=1; j <= m; ++j)
			for(int f=1; f <= k; ++f )
				++dp[i+j+f];
	int ans = INT_MIN,cnt=0;
	for(int i=1; i<= (n+m+k+1); ++i)
		if(dp[i] > cnt )
			ans  = i, cnt=dp[i];
		cout<<ans;
	

}