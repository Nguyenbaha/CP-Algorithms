#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	long long n,  m;
	cin >> n >> m;
	if( n == m)
	{
		cout << 0;
		return 0;
	}
	
	if(m%n != 0)
	{
		cout << -1;
		return 0 ;
	}
	int res = m/n;
	int cnt =0;
	while(res%3==0)
	{
		cnt++;
		res/=3;
	}
	while(res%2==0)
	{
		cnt++;
		res/=2;
	}
	if(res != 1)
	{
		cout <<-1;
	}
	else
		cout << cnt;
}