	#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e4;
int root[maxn+1], p;

int Get(int u)
{
	if (!root[u]) return u;
	return root[u] = Get(root[u]);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL); cout.tie(NULL);
	cin >> p;
	while (p--)
	{
		int u, v, type;
		cin >> u >> v >> type;
		int U = Get(u), V = Get(v);
		if (type == 1) { if (U != V) root[U] = V; }
		else
			if (U == V) cout << 1 << "\n";
			else cout << 0 << "\n";
	}
	return 0;
}
//#include <cstdio>
//const int N = 10005;
//using namespace std;
//
//struct disjoint_set {
//    int P[N];
//    disjoint_set() {for(int i = 0; i < N; i++) P[i] = i;}
//    int at(int x) {return (x == P[x]) ? P[x] : (P[x] = at(P[x]));}
//    void join(int x, int y) {P[at(x)] = at(y);}
//};
//disjoint_set Lab;
//
//int main()
//{
//    int x, y, z, q;
//    scanf("%d", &q);
//    while (q--) {
//        scanf("%d %d %d", &x, &y, &z);
//        x = Lab.at(x); y = Lab.at(y);
//        if (z == 1) {if (x != y) Lab.join(x, y);}
//        else {printf("%d\n", x == y ? 1 : 0);}
//    }
//    return 0;
//}

/////



//
//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//const int N = 10000;
//int s[N];
//
//int findSet(int x) {
//    return s[x] == x ? x : s[x] = findSet(s[x]);
//}
//
//void unionSet(int x, int y) {
//    s[findSet(x)] = findSet(y);
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    for(int i = 0; i < N; ++i)
//        s[i] = i;
//    int p;
//    cin >> p;
//    for(int i = 0; i < p; ++i) {
//        int x;
//        int y;
//        int z;
//        cin >> x >> y >> z;
//        --x; --y;
//        if(z == 1) {
//            unionSet(x, y);
//        } else {
//            printf("%d\n", findSet(x) == findSet(y) ? 1 : 0);
//        }
//    }
//    return 0;
//}
