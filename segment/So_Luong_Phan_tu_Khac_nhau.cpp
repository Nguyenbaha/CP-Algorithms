#include<bits/stdc++.h>
using namespace std;
#define c1 id * 2
#define c2 id * 2 + 1

const int maxn = 3e4 + 1, maxq = 2e5 + 1, maxp=1e6 + 1;
int n, q, st[4 * maxn], res[maxq], p[maxp];
struct dt
{
    int i, j, t, pos;
} a[maxn + maxq];

bool cmp(dt a, dt b){
    return a.j < b.j || (a.j == b.j && a.t>b.t);
}

void up(int id, int l, int r, int i, int val){
    if (r<i || l>i)
     return;
    st[id]+=val;
    if (l==r) 
        return;
    int mid = (l + r) / 2;
    up(c1, l, mid, i, val);
    up(c2, mid + 1, r, i, val);
}

int get(int id, int l, int r, int u, int v){
    if (r < u || l > v) 
        return 0;
    if (u <= l && r <= v) 
        return st[id];
    int mid = (l + r) / 2;
    return get(c1, l, mid, u, v) + get(c2, mid + 1, r, u, v);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i].i;
        a[i].j = i;
        a[i].t = 1;
    }
    cin>>q;

    for (int i = n + 1; i <= q + n; i++) {
        cin >> a[i].i >> a[i].j;
        a[i].pos = i - n;
    }
    sort(a + 1, a + n + q + 1, cmp);
    
    for (int i = 1; i <= q + n; i++) 
        if (a[i].t) {
            up(1, 1, n, a[i].j, 1);
            if (p[a[i].i]) 
                up(1, 1, n, p[a[i].i], -1);
            p[a[i].i] = a[i].j;
        }
        else 
            res[a[i].pos] = get(1, 1, n, a[i].i, a[i].j);
    
    for (int i = 1; i <= q; i++)
     cout<<res[i]<<endl;
    return 0;
}