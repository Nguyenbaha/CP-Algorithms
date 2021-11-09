#ifndef LOCAL
#pragma GCC optimize "-O3"
#endif
#include <bits/stdc++.h>

typedef long long ll;
typedef long long llong;
typedef long double ld;
typedef unsigned long long ull;

using namespace std;

/*
ll pw(ll a, ll b) {
	ll ans = 1; while (b) {
		while (!(b & 1)) b >>= 1, a = (a * a) % MOD;
		ans = (ans * a) % MOD, --b;
	} return ans;
}
*/
const int MX = 1e6 + 228;

int n, t;
int a[MX];
int b[MX];

deque<int> d;

int main() {
	scanf("%d%d", &n, &t);
	for (int i = 0; i < n; ++i) {
		scanf("%d", a + i);
	}
	int now = 0;
	int s0 = 0;
	int cur = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] == 0) {
			++s0;
			if (!d.empty())
				d.pop_back();
		}
		else {
			b[now++] = 1;
			d.push_back(s0);
		}
		while (!d.empty() && d.front() <= cur)
			d.pop_back();
		while (s0 - cur + d.size() > t) {
			b[now++] = 0;
			++cur;
			while (!d.empty() && d.front() <= cur)
				d.pop_front();
		}
	}
	for (int i = 0; i < n; ++i)
		printf("%d ", b[i]);
	printf("\n");
	return 0;
}


