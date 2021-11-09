#include<bits/stdc++.h>

#define ntest 1

using namespace std;

long long l, r, m, n, b, c;
void solve() {
    cin >> l >> r >> m;
    for (long long a = l; a <= r; ++a) {
        long long L = 1, R = 100000000000, mid;
        bool ok = false;
        while(L <= R) {
            mid = (L+R) >> 1;
            if (mid * a > (m + (r-l))) R = mid - 1;
            else if (mid * a < (m - (r-l))) L = mid + 1;
            else {
                ok = true;
                n = mid;
                break;
            }
        }
        if (ok) {
            long long x = n * a - m;
            if (x < 0) b = r;
            else b = l;
            c = b + x;
            cout << a << ' ' << b << ' ' << c << '\n';
            return;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    if(ntest){
        int t;
        cin >> t;
        while(t--) solve();
    } else {
        solve();
    }

}
