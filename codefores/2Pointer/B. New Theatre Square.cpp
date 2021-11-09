#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n, m, x, y;
    cin >> n >> m >> x >> y;
    char grid[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> grid[i][j];
    }
    int cost = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            //cout << grid[i][j] << " ";
            if (grid[i][j] == '.')
                {
                    if (j + 1 < m)
                    {
                        if (grid[i][j + 1] == '.')
                        {
                        cost += min(2 * x, y);
                        j++;
                        continue;
                        }
                    }
                cost += x;
                }
        }
        //cout << "\n";
    }
    cout << cost << "\n";
}


signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests;
cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}


