#include<bits/stdc++.h>
using namespace std;
string s;
int dp[2005][2005];

void trace(int l, int r)
{
    if( l== r)
    {
        cout << s[l];
        return;
    }
    if(s[l] == s[r])
    {
        cout << s[l];
        trace(l+1, r-1);
        cout << s[r];
        return;
    }
    if(dp[l][r] == dp[l+1][r])
        trace(l+1,r);
    else
        trace(l,r-1);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    int n = s.size();

    for(int i =1; i <= n; ++i)
        for(int l=0; l < n-i+1; ++l)
        {
            int r = i+l-1;
            if( i==1)
            {
                dp[l][r] = 1;
                continue;
            }
            if( i== 2)
            {
                dp[l][r] = 1 + (s[l] == s[r]);
                continue;
            }
            dp[l][r] = max(dp[l+1][r] , dp[l][r-1]);
            if(s[l] == s[r])
                dp[l][r] = max(dp[l][r], 2 + dp[l+1][r-1]);

        }
    //cout << dp[0][n-1];
        trace(0,n-1);
}