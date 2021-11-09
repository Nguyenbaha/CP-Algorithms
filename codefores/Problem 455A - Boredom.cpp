#include <bits/stdc++.h>
using namespace std;
#define min_3(a,b,c) (min((a),min((b),(c))))
#define all(a) a.begin(),a.end()
#define pb push_back
#define mkp make_pair
#define forn(m,n) for (int i=m; i<n; ++i)
#define fi first
#define se second
#define sz(X) (int)(X).size()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
const int MAXN = 1e5 + 10;
long long int dp [ MAXN ] , ar [ MAXN ];
void ha()
{
int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++)
	{
		int a;
		cin >> a;
		ar [ a ]++;
		//cout<<x<<" ";
	}
	//cout<<endl; cout<<ar[1]<<" "<<ar[2]<<" "<<ar[3]<<endl;
	//cout<<"j"<<dp[0]<<" j";
	dp [ 1 ] = ar [ 1 ];
	//for(int i=0;i<n;i++) cout<<ar[i]<< " ";
	//cout<<endl;
//	for(int i=0;i<n+2;i++) cout<<dp[i]<< " ";
//	cout<<endl;
	for(int i = 2 ; i < MAXN ; i++)
	{
		dp [ i ] = max(ar [ i ] * i + dp [ i - 2 ], dp [ i - 1 ]);
		//cout<<dp[i]<<" ";
	}
	cout << dp [ MAXN - 1 ];
	//for(int i=0;i<n+2;i++) cout<<dp[i]<< " ";
	//cout<<endl;
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




