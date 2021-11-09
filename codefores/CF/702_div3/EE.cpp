#include <bits/stdc++.h>
using namespace std;


#define int long long

 void out(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

void solve() {
    int n; cin >> n;

    vector <pair <int, int> > v(n);

    int c = 0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back({x,i++});
    }

    sort(v.begin(), v.end());

    vector <int> prefix;
    for(auto e: v)
        prefix.push_back(e.first);

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

int64_t main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--)
        solve();
}

