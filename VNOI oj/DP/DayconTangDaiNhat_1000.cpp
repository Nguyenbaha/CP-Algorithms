#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false); 
     cin.tie(0);
     int n;
     cin >> n;
     vector <int> a(n);
     for(auto &e:  a)
        cin >> e;
     vector<int> dp (n+1,INT_MAX);
     dp[0] = INT_MIN;
     int ans  =0 ;
     for(auto e: a)
     {
        int tmp = lower_bound(dp.begin(), dp.end(),e) - dp.begin();
        dp[tmp] = e;
        ans  = max(ans,tmp);
     }
     cout << ans;
}