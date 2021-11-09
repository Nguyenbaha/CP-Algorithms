#include <bits/stdc++.h>

#define ll long long
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;
template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;

const int N = 2e5 + 5;
int n, m;
ll tree[4 * N], a[N];

void build(int i, int l, int r) {
    if(l == r) {
        tree[i] = a[l];
        return;
    }
    int m = (l + r) / 2;
    build(2 * i + 1, l, m);
    build(2 * i + 2, m + 1, r);
    tree[i] = tree[2 * i + 1] + tree[2 * i + 2];
}
ll query(int i, int l, int r, int L, int R) {
    if(r < L || R < l) return 0;
    if(L <= l && r <= R) return tree[i];
    int m = (l + r) / 2;
    return query(2 * i + 1, l, m, L, R) + query(2 * i + 2, m + 1, r, L, R);
}
void upd(int i, int l, int r, int k, ll x) {
    if(l == r) {
        tree[i] = x;
        return;
    }
    int m = (l + r) / 2;
    if(k <= m) {
        upd(2 * i + 1, l, m, k, x);
    }else {
        upd(2 * i + 2, m + 1, r, k, x);
    }
    tree[i] = tree[2 * i + 1] + tree[2 * i + 2];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;
    rep(i, 1, n + 1) {
        cin >> a[i];
    }
    build(0, 1, n);
    while(m--) {
        int ty;
        cin >> ty;
        if(ty == 1) {
            int i, v;
            cin >> i >> v;

            upd(0, 1, n, i, v);
        }else {
            int l, r;
            cin >> l >> r;

            cout << query(0, 1, n, l, r) << '\n';
        }
    }
}
