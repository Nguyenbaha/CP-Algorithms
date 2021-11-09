#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <utility>
#define MOD 1000000007
typedef long long LLD;
using namespace std;
int ar[20000];
int dp[2000];
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
	int mn = 1999;
	cin >> n;
	for(int i = 0; i < n; i ++)
	{
	    cin >> ar[i];
	    mn = min(mn, ar[i]);
	}
	for(int i = 0; i < 2000; i ++)
	    dp[i] = MOD;
	dp[0] = 0;
	for(int i = 1; i < 1200; i ++)
	{
	    dp[i] = min(dp[i], dp[i-1] + 1);
	    if(i - 2 >= 0)
		dp[i] = min(dp[i], dp[i-2] + 1);
	    if(i - 5 >= 0)
		dp[i] = min(dp[i], dp[i-5] + 1);
	}
	int steps = MOD;
	for(int s = 0; s <= mn; s ++)
	{
	    int ans = 0;
	    for(int i = 0; i < n; i ++)
		ans += dp[ar[i] - s];

	    steps = min(steps, ans);
	}
	cout << steps << endl;
    }
    return 0;
}
