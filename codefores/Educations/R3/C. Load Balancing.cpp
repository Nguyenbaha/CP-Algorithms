#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int a[N];
 int n, sum = 0, ans1 = 0, ans2 = 0; cin >> n;
        for(int i = 1; i <= n; i++) {
                cin >> a[i];
                sum += a[i];
        }
        sum /= n;
        for(int i = 1; i <= n; i++) {
                ans1 += max(0, sum - a[i]);
                ans2 += max(0, a[i] - sum - 1);
        }
        cout << max(ans1, ans2) << endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests=1;
//cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}


