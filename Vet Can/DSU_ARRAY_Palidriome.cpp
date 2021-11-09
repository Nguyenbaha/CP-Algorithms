#include <bits/stdc++.h>
using namespace std;

class DSU
{
	public: 
	
		vector <int> parent;
	
	DSU(int N)
	{
		parent = vector <int> (N,-1);
	}
	int root(int A)
	{
		return parent[A] < 0 ? A : (parent[A] = root(parent[A]));
	}
	int size(int A)
	{
		return -parent[root(A)];
	}
	bool join(int A, int B)
	{
		A = root(A);
		B = root(B);
		if(A == B)
			return false;

		parent[A] += parent[B];
		parent[B] = A;
		return true;
	}

	bool same(int A, int B)
	{
		return root(A) == root(B);
	}

};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >>  n;
	vector <int> a(n);
	long long ans =0 ;
	for(auto &e: a)
		cin >> e;
	DSU dsu(200006);
	for(int i=0; i < n; ++i)
		dsu.join(a[i] , a[n-i-1]);
	/*for(int i=0;i <n ; ++i)
		cout << dsu.parent[i]<< endl;
	return 0;*/
	for(int i=0; i < 200006; ++i)
		if(i == dsu.root(i))
			{
	//cout <<"i: " << i <<" root(i): "<<dsu.root(i)<< " size: "<<  dsu.size(i)<< endl; 
			ans += dsu.size(i) - 1;
			}
	cout << ans;
}