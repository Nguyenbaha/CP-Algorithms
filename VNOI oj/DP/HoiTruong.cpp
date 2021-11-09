#include<bits/stdc++.h>
using namespace std;
pair<int,int> pii;
int dp[200006];
vector<pair<int,int>> a;
bool cmp(pair<int,int> u,pair<int,int> v)
{
	return u.second < v.second ;
}
int bs(int l, int r, int find)

{
	int ans = -1;
	while(l<=r)
	{
		int mid = (l+r) / 2;
		if(a[mid].second <= find)
			l = mid +1, ans = mid;
		else r = mid -1;

	}
	return ans;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i=0; i < n; ++i)
	{
		int x,y;
		cin >> x >> y;
		a.push_back({x,y});
	}
	sort(a.begin(),a.end(),cmp);
	/*for(auto e: a)
		cout<<e.first<<' '<<e.second<<endl;
	return*/
	dp[0] = a[0].second - a[0].first;
	for(int i=1; i< n; ++i)
	{
		int res = bs(0,i-1,a[i].first);
		dp[i] = max(dp[i-1] ,  a[i].second - a[i].first  + dp[res]);
	}
	cout << dp[n-1];
}