#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <queue>
#include <map>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <deque>
#include <bitset>
#include <unordered_set>
#include <unordered_map>
#define ll              long long
#define PII             pair<int, int>
#define rep(i,a,b)      for(int  i=a;i<=b;i++)
#define dec(i,a,b)      for(int  i=a;i>=b;i--)
using namespace std;
int dir[4][2] = { { 0,1 } ,{ 0,-1 },{ 1,0 },{ -1,0 } };
const long long INF = 0x7f7f7f7f7f7f7f7f;
const int inf = 0x3f3f3f3f;
const double pi = 3.14159265358979323846;
const double eps = 1e-6;
const int mod = 998244353;
const int N = 1e6 + 5;
//if(x<0 || x>=r || y<0 || y>=c)

inline ll read()
{
    ll x = 0; bool f = true; char c = getchar();
    while (c < '0' || c > '9') { if (c == '-') f = false; c = getchar(); }
    while (c >= '0' && c <= '9') x = (x << 1) + (x << 3) + (c ^ 48), c = getchar();
    return f ? x : -x;
}
ll gcd(ll m, ll n)
{
    return n == 0 ? m : gcd(n, m % n);
}
ll lcm(ll m, ll n)
{
    return m * n / gcd(m, n);
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
 
    }
    return 0;
}
/**
	1
	1 2 3 1 4 5 6 7 8 9
*/


