#include<bits/stdc++.h>
using namespace std;
// unstoppable: Nguyễn Bá Hà

	void sol()
{
	int n;
	cin >> n;
	vector < int > a(n);
	for(auto &e: a)
		cin >> e,--e;
	for(int i =0; i < n ;  ++i)
		{
			int pos = i;
			int cnt = 0;
			do
			{
				cnt ++;
				pos = a[pos];
			}while(pos!=i);
			cout << cnt << ' ';
		}

	cout <<endl;
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