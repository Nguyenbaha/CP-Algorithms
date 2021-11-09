#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios :: sync_with_stdio(false);
	cin.tie(0);
	int n, v;
	cin >> n>> v;
	if(v >= n-1)
	{
		cout << n-1;
	}
	else
	{
		n-=v;
		 cout <<n*(n+1)/2-1+v;
	}
}