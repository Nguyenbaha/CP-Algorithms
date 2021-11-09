#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

int x[1005] = {0};
int y[1005] = {0};
bool v[105];
int n;

void dfs(int j) {
    v[j] = true;
    for (int i = 1; i <= n; i++) {
        if (!v[i] && (x[i] == x[j] || y[i] == y[j])) {
            dfs(i);
        }
    }
}
void Never_give_up()

{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (!v[i]) {
            ans++;
            dfs(i);
        }
    }
    cout << ans - 1;
//    return 0;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



