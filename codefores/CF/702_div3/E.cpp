#include <bits/stdc++.h>
using namespace std;


#define int long long

template <typename T> void out(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

void solve() {
    int n; cin >> n;

    vector <pair <int, int> > v(n);

    int c = 0;
    for(auto &[x, y]: v) {
        cin >> x;
        y = c++;
    }

    sort(v.begin(), v.end());

    vector <int> prefix;
    for(auto [x, y]: v)
        prefix.push_back(x);

    for(int i = 1; i < n; i++)
        prefix[i] += prefix[i - 1];

    vector <int> ans = {v.back().second};
    int id = n-1;
    while( id > 0 && prefix[id] >= v[id].first)
    {
        id--;
        ans.push_back(v[id].second);
    }


    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    out(ans);
}

int32_t main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--)
        solve();
}
