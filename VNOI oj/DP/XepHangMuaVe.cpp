#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector < int> t(n),r(n-1);
    for(auto &e: t)
        cin >> e;
    for(auto &e: r)
        cin >> e;
    vector<int> dp(n+1);
    dp[0] = t[0];
    dp[1] = min(t[0]+t[1],r[0]);
    for(int i=2; i < n; ++i)
        dp[i] = min(dp[i-1] + t[i], dp[i-2]+r[i-1]);
    cout <<dp[n-1];
}
