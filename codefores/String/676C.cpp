#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T=1;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
string s;
int n,k;
void sol()
{
    cin >> n;
    cin >> k;
    cin >> s;
    int start = 0;
    int ans = 0;
    deque<int> de;
    for (int i = 0; i < (s.size()); i++) {
        if (s[i] == 'b')
            de.push_back(i);
        if ((de.size()) > k) {
            start = de.front() + 1;
            de.pop_front();
        }
        ans = max(ans, i - start + 1);
        //cout << ans << endl;
    }
    de.clear();
    start = 0;
    for (int i = 0; i < (s.size()); i++) {
        if (s[i] == 'a')
            de.push_back(i);
        if ((de.size()) > k) {
            start = de.front() + 1;
            de.pop_front();
        }
        ans = max(ans, i - start + 1);
    }
    cout << ans << endl;

}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //cin >> T;
    while(T--)
{
    sol();
 }


}

