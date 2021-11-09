#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n; 
	cin >> n;
	long long a[n+6];
	a[0] = 0;

	for(int i=1; i <= n; ++i)
	{
		int t;
		cin >> t;
		
		a[i] = a[i-1] + t;
	}
	if(a[n] % 3)
	{
		cout << 0;
		return 0 ;
	}
	
	long long ans=0, cnt=0;
	for(int i=1;i < n; ++i)
	{
		if(a[i] == a[n]/3*2)
			ans += cnt;
		if(a[i]==a[n]/3)
			cnt++;
	}
	cout <<ans;
}