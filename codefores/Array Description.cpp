#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
vector<vector<ll>> a;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
   cout.tie(0);
	int n, m;
	cin >> n >> m;
	a.resize(n,vector<ll>(m+1,0));
	for(int i = 0; i < n; i++){
		int c;
		cin >> c;
		if(c == 0){
			if(i == 0){
				for(int j = 1; j <= m; j++) a[i][j] = 1;
			}else{
				for(int j = 1; j <= m; j++){
					for(int k = j - 1; k <= min(j + 1, m); k++) a[i][j] += a[i - 1][k];
					a[i][j] %= mod;
				}
			}
		}else{
			if(i == 0){
				a[i][c] = 1;
			}else{
				for(int k = c - 1; k <= min(c + 1, m); k++) a[i][c] += a[i - 1][k];
				a[i][c] %= mod;
			}
		}
	}
	ll s = 0;
	for(int i = 1; i <= m; i++) s = (s + a[n - 1][i]) % mod;
	cout << s << '\n';
}
