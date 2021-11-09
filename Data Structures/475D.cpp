#include<bits/stdc++.h>
using namespace std;

const int max_n = 111111, max_lev = 19;
int n, q, x, a[max_n], mins[max_lev][max_n], num[max_n];
map<int, long long> m;


// RMQ nhé, segment hay fenw cũng chơi được!
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (a != 0 && b != 0) {
        int k = a;
        a = b;
        b = k % b;
    }
    return a + b;
}


void get_all_gcd() {
    for (int i = 0; i < n; ++i) {
        mins[0][i] = a[i];
    }
    for (int i = 1; i < max_lev; ++i) {
        for (int j = 0; j < n && j + (1 << (i - 1)) < n; ++j) {
            mins[i][j] = gcd(mins[i - 1][j], mins[i - 1][j + (1 << (i - 1))]);
        }
    }
    for (int i = 1, x = 0; i <= n; i *= 2, ++x) {
        for (int j = i; j <= n && j < i * 2; ++j) {
            num[j] = x;
        }
    }
}

int get_gcd(int l, int r) {
    int lev = num[r - l + 1];
    return gcd(mins[lev][l], mins[lev][r - (1 << lev) + 1]);
}

int main() {
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i] ;
    }
    get_all_gcd();
    for (int i = 0; i < n; ++i) {
        int g = a[i], poz = i;
        //cout << i << " : ";
        while (poz < n) {
            int l = poz, r = n;
            while (r - l > 1) {
                int mid = (l + r) / 2;
                if (get_gcd(i, mid) == g) {
                    l = mid;
                } else {
                    r = mid;
                }
            }
            long long cnt = l - poz + 1;

            //cout << "(" << poz << "-" << l << " gcd=" << g << ") ";
            
            m[g] += cnt;

            g = get_gcd(i, l + 1);
            poz = l + 1;
        }
        //cout << endl;
    }
    cin >> q;
    while (q--) {
        cin >> x ;
        cout << m[x]<<endl;
    }
    return 0;
}
