
#include <bits/stdc++.h>

#define ll long long
using namespace std;


int a, b;

ll k, f[10000005];

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    for (int i = 0; i < 10000005; i++) f[i] = 0;
    //code goes here
    for (int i = 1; i <= 10000000; i++) {
        for (int j = i*2; j <= 10000000; j+=i) {
            f[j] += i;
        }
    }
    for (int i = 1; i <= 10000000; i++) {
        f[i] = abs(f[i] - i);
    }
    int res = 0;
    cin >> a >> b >> k;
    for (int i = a; i <= b; i++) {
        if (f[i] <= k) {
            res++;
        }
    }
    cout << res;
    return 0;
}
