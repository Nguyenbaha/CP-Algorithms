#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{


	int n;
	cin >> n;
	vector<int> a(n);
	int s=0;
	for(auto &e: a)
		cin>> e;
	int mx= *max_element(a.begin(),a.end());
	int mn = *min_element(a.begin(),a.end());
	if(mx!=mn)
	{
		int cnt=0;
		for(int i=0;i <n ;++i)
			if(a[i] == mn)
				cnt ++;
			cout<<n-cnt<<endl;
	}
	else
	{
		cout <<0<<endl;
	}
}
}