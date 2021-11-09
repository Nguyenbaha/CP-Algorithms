#include <bits/stdc++.h>

using namespace std;

const int M = 2e5 + 239;

int n, p[M], t;

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        p[t] = i;
    }
    int l = n;
    int r = 1;
    string ans = "";
    for (int i = 1; i <= n; i++)
    {
        l = min(l, p[i]);
        r = max(r, p[i]);
        if (r - l+1 == i)
            ans += '1';
        else
            ans += '0';
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
