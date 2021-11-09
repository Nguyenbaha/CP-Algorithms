#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
//here

void sol()
{
   int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a;
    int cur = 0;
    for (char c : s) {
        if (c == '.') ++cur;
        else a.push_back(cur);
    }
    if (a.empty()) {
        cout << 0 << '\n';
        return;
    }
    int m = a[a.size() / 2];
    for(auto e: a)
        cout<<e<<' ';
     return;
    int ans = 0;
    for (int k : a)
        ans += abs(k - m);
    cout << ans << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    sol();
 }


}
