#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int l1,r1,l2,r2;
		cin >> l1 >> r1 >> l2 >> r2;
		cout << l1<<' ';
		if(l2 != l1)
		{
			cout << l2;
		}
		else 
		{
			cout << r2;
		}
		cout<<endl;
	}
}