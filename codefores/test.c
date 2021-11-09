#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e4 + 10;
long long int dp [ MAXN ];
int main() {
	ios::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
	int n , a , b , c;
	cin >> n >> a >> b >> c;
	for(int i = 0 ; i < MAXN ; i++)
		dp [ i ] = -1;
	dp [ 0 ] = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(dp [ i ] != -1)
		{
			dp [ i + a ] = max(dp [ i ] + 1 , dp [ i + a ]);
			dp [ i + b ] = max(dp [ i ] + 1 , dp [ i + b ]);
			dp [ i + c ] = max(dp [ i ] + 1 , dp [ i + c ]);
		}
	}
	cout << dp [ n ];
}
