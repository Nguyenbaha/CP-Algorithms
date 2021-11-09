#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for(auto &e: a)
    cin >> e;
  vector<int> dp(n);
    for(int i= n-1;i >= 0; --i)
    {
        dp[i] = a[i];
        int len = i+a[i];
        if(len < n)
            dp[i] += dp[len];
    }
    cout<<*max_element(dp.begin(),dp.end())<<endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}