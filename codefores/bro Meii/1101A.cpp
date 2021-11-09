#include<bits/stdc++.h>
using namespace std;
int tc;
int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> tc;
	while( tc--)
		{
			int l,r,x;
			cin >>  l>> r >>x;
			if (x < l)
			{
				cout <<x <<endl;
				continue;
			}
			else
			{
				int res = r/x+1;
				cout << res*x<<endl;
			}
		}

}