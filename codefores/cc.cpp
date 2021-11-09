#include<bits/stdc++.h>
using namespace std;

int n,a[4];
int dp[4005];
int main() {
    cin >> n;
    for(int i = 0; i < 3; ++i){
        cin >> a[i];
        dp[a[i]] = 1;
    }
    sort(a, a+3);
    for(int i = 0; i <= n; ++i) {
        if(dp[i] > 0) {
            for(int j = 0; j < 3; ++j) if(i+a[j] <= n) dp[i+a[j]] = max(dp[i+a[j]], dp[i] + 1);
        }
    }
    cout << dp[n];

}
