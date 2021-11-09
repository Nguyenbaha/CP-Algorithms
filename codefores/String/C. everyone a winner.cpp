#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{

int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		set<int>s;
		s.insert(0);
		for (int i = 1; i <= sqrt(n); i++) {
			s.insert(i), s.insert(n / i);
		}
		cout << s.size() << endl;
		for (int it:s) cout << it << ' ';
		cout << endl;
}}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




