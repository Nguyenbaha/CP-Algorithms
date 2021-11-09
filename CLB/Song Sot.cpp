#include <bits/stdc++.h>

using namespace std;



int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int64_t n,k,total=0, c=0;
	cin >> n;
	vector<int> ans(n);
	for(int &i:ans) {cin>> i;c+=abs(i);}
	sort(ans.begin(),ans.end());
	cin >> k;
	for(int i=0;i<k;++i){
		int x;
		cin >> x;
		total+=x;
		int p = upper_bound (ans.begin(), ans.end(),0) - ans.begin();
		int q = n-p;
		cout << abs(c-p*total+q*total) << '\n';
	}
	return 0;
}
