#include <bits/stdc++.h>

#define int long long
#define MOD 1000000007

using namespace std;
int n, q;

void build_tree(int a[], int tree[], int start, int end, int idx) {
    if(start == end) {
        tree[idx] = a[start];
        return;
    }
    int mid = (start + end) / 2;
    build_tree(a, tree, start, mid, idx * 2);
    build_tree(a, tree, mid + 1, end, idx * 2 + 1);

    tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
}

int query(int tree[], int lazy[], int k, int start = 0, int end = n - 1, int idx = 1) {

    if(k < start || k > end || start > end) {
        return 0;
    }
    if(lazy[idx] != 0) {
        tree[idx] += lazy[idx] * (end - start + 1);
        if(start != end) {
            lazy[idx * 2] += lazy[idx];
            lazy[idx * 2 + 1] += lazy[idx];
        }

        lazy[idx] = 0;
    }


    if(k == start && k == end) {
        return tree[idx];
    }

    int mid = (start + end) / 2;
    int res1 = query(tree, lazy, k, start, mid, idx * 2);
    int res2 = query(tree, lazy, k, mid + 1, end, idx *2 + 1);
    return res1 + res2;
}

void update(int tree[], int lazy[], int l, int r, int u, int start = 0, int end = n - 1, int idx = 1) {
    if(lazy[idx] != 0) {
        tree[idx] += lazy[idx] * (end - start + 1);
        if(start != end) {
            lazy[idx * 2] += lazy[idx];
            lazy[idx * 2 + 1] += lazy[idx];
        }
        lazy[idx] = 0;
    }
    if(l > end || r < start || start > end) {
        return;
    }
    if(l <= start && r >= end) {
        tree[idx] += u * (end - start + 1);
        if(start != end) {
            lazy[idx * 2] += u;
            lazy[idx * 2 + 1] += u;
        }
        return;
    }

    int mid = (start + end) / 2;

    update(tree, lazy, l, r, u, start, mid, idx * 2);
    update(tree, lazy, l, r, u, mid + 1, end, idx * 2 + 1);

    tree[idx] = tree[idx * 2] + tree[idx * 2 + 1];
}

void solve() {

    cin >> n >> q;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int tree[4 * n] = {0};
    int lazy[4 * n] = {0};
    build_tree(a, tree, 0, n - 1, 1);

    // for(int i = 0; i < 4 * n; i++) {
    //     cout << tree[i] << " ";
    // }

    for(int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if(type == 1) {
            int l, r, u;
            cin >> l >> r >> u;
            update(tree, lazy, l - 1, r - 1, u);
        }
        else {
            int k;
            cin >> k;
            cout << query(tree, lazy, k - 1) << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
