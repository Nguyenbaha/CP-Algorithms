#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >>  n;
	vector <int> a(n);
	bool ok = 0;
	for(auto & e: a)
		{
			cin >> e;
			if(e == 1)
				ok =1;
		}
	if(!ok)
	{
		cout << 0;
		return 0;
	}
	int ans = 0;
	
	int cnt  =0,l,r;
	for(int i=0; i < n; ++i)
	{
		if(a[i] == 1)
		{
			cnt ++;
		}
		else
		{
			l = i;
			break;
		}
	}
	for(int i=n-1; i >= 0 ; --i)
	{
		if(a[i] == 1)
		{
			cnt ++;
		}
		else {
			r = i;
			break;
		}
	}
	ans = cnt;
	cnt =0 ;
	for( int i = l; i <=r; ++i)
	{
		if(a[i]==1)
		{
			cnt ++;
			ans = max(ans, cnt);
		}
		else
			cnt = 0;
	}
	cout << ans;
}