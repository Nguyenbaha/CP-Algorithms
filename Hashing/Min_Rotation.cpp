
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int M2 =  998244353;
const int M1 =  1000000007;

int Hash[2000002];
int p[2000002];
 
int mpow(int a, int b) {
  int r = 1;
  while(b) {
    if(b & 1)
      r = (r * a) % M1;
    a = (a * a) % M1;
    b >>= 1;
  }
  return r;
}
 
int get(int l ,int r) {
  return ((Hash[r] - Hash[l - 1] + M1) * p[l -1]) % M1;
}

void solve() {
  string s;
  cin >> s;
  s += s;
  int n = s.size();
  int x = 1;
  for(int i = 0; i < n; i++) {
    p[i] = mpow(x, M1 - 2);
    x *= 131;
    x %= M1;
  }
  x = 1;
  for(int i = 0; i < n; i++) {
    Hash[i + 1] = (Hash[i] + x * (s[i] - 'a')) %M1;
    x *= 131;
    x %= M1;
  }
  n >>= 1;
  int k = 1;
  for(int i = 2; i <= n; i++) {
    int lo = 0, hi = n - 1;
    while(lo <= hi) {
      int mi = (lo + hi) >> 1;
      if(get(i, i + mi) ==  get(k, k + mi))
        lo = mi + 1;
      else
        hi = mi - 1;
    }
    if(lo <= n - 1)
      if(s[i + lo - 1] < s[k + lo - 1])
        k = i;
  }
  cout << s.substr(k - 1, n) << "\n";
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}