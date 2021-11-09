#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, dem;

int main() {
    cin >> n >> a >> b >> c;

    for (int i = 0; i <= n/a; ++i) {
        for (int j = 0; j <= n/b; ++j) {
            int k = n-i*a-j*b;
            if (k%c == 0 && k >= 0) dem = max(i+j+k/c, dem);
        }
    }

    cout << dem;

    return 0;
}
