#include<bits/stdc++.h>
using namespace std;
int  n ,k;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	int a[n+6];
	int one  = 0;
	for(int i=1; i<=n; ++i)
	{
		cin >> a[i];
		if(a[i] == 1)
			one ++;
	}
	if(one == n)
	{
		cout << n-1;
		return  0;
	}
	int keep = 0, mx0 = 0;
	for(int i=1; i<= n; ++i)
	{
		if(a[i]==1)
		{
			keep --;

			if(keep < 0)
			keep = 0;
		}
		else
		{
		
			keep++;
		}
		if(keep > mx0)
			mx0 = keep;
	}
	cout << one+mx0;
}