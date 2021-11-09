#include<bits/stdc++.h>
using namespace std;
// unstoppable: Nguyễn Bá Hà

	void sol()
{
	int n;
	cin >> n;
	vector < int > a(n);
	for(auto &e: a)
		cin >>e ;
	sort(a.begin(),a.end());
	for(int i=1; i < n; ++i)
	{
		if(a[i] - a[i-1] == 1)
		{
			cout <<2<<endl;
			return ;
		}
	}
	cout << 1<<endl;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin >> q;
	while (q--)
	{
		sol();
	}
	
	
}