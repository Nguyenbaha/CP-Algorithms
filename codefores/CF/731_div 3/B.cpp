#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int tc;
	cin >> tc;
	while( tc--)
	{
		int n;
		cin >> n;
		set<int> s;
		vector< int> a(n),b;
		for(auto &e : a)
			cin >> e, s.insert(e);
		if(s.size() == 1)
		{
			cout << 0<<endl;
			continue;
		}
		//1
		if(n == 2)
		{
			cout << 1<<endl;
			continue ;
		}
		for(int i=0; i < n-1; ++i)
			b.push_back(__gcd(a[i],a[i+1]));
		
		b.push_back(__gcd(a[n-1],a[0]));
		for(auto e: b)
			cout <<e <<' ';
		continue;
		bool ck = 0;
		for(int i =1; i < n; ++i)
		{
			if(b[i] != b[i-1])
				ck=1;
		}
		if(ck==0)
		{
			cout << 1<<endl;
			continue;
		}

		int cnt = 0;
		for(int i=0; i < n; ++i)
		{
			if(b[i]!= 1)
				cnt ++;
		}
		
		
		cout << cnt<<endl;
	}
}