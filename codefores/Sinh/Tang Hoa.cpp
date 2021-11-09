



#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 const int maxN = 40;
int n, a[maxN], ss, p;

int main() {
    cin >> n >> ss >> p;
    for (int i = 0; i < n; ++i) cin >> a[i];

    map<long long, int> m;
    for (int x = 0; x < 1 << (n >> 1); ++x) {
        long long s = 0;
        int cnt = 0;
        for (int i = 0; i < n >> 1; ++i)
            if (x >> i & 1) {
                s += a[i];
                cnt++;
            }
        if (m.find(s) == m.end()) m[s] = cnt;
        else m[s] = min(m[s], cnt);
    }

    long long ans = 2e18;
    for (int x = 0; x < (1 << (n - n / 2)); ++x) {
        long long s = 0;
        int cnt = 0;
        for (int i = 0; i < n - n / 2; ++i)
            if (x >> i & 1) {
                s += a[i + n / 2];
                cnt++;
            }
        if (m.find(ss - s) != m.end()) {
            ans = min(ans, (long long)cnt + m[ss - s]);
        }
    }

    if (ans == 2e18) cout << -1; else cout << ans * p;
    return 0;
}

