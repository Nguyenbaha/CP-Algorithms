#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
    int n; cin>>n;
	vector<int> a(n); for(int &a1: a) cin>>a1;
    ll ans=0;
	map<int,int> mp;
	for(int i=0; i<n; i++)
	{
		int cnt=0;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]==a[i]) ans+=cnt;
			cnt+=mp[a[j]];
		}
		mp[a[i]]++;
	}
	cout<<ans<<'\n';
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests;
cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}


