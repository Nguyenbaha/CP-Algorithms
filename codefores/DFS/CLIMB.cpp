
#include<bits/stdc++.h>

using namespace std;

int res, a[115][115], n;
int visited[115][115];
int hmn = 120, hmx=-1;

void dfs(int mn, int mx, int i = 1, int j = 1){
    if (i >= 1 && i <= n && j >= 1 && j <= n && !visited[i][j] && a[i][j] >= mn && a[i][j] <= mx) {
        visited[i][j] = 1;
        dfs(mn, mx, i-1, j);
        dfs(mn, mx, i, j-1);
        dfs(mn, mx, i+1, j);
        dfs(mn, mx, i, j+1);
    }
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            hmn = min(hmn, a[i][j]);
            hmx = max(hmx, a[i][j]);
        }
    }
    int ans;
    int l = 0, r = 111;
    while (l <= r) {
        int ok = 0;
        int mid = (l+r)/2;
        for (int i = hmn; i <= hmx; i++) {
            memset(visited, 0, sizeof visited);
            dfs(i, i+mid);
            if (visited[n][n]) {
                ok = 1;
                break;
            }
        }
        if (ok) {
            ans = mid;
            r = mid-1;
        } else l = mid+1;
    }
    cout << ans;
    return 0;
}
