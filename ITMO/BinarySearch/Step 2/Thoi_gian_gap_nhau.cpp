#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <numeric>
#include <cstdio>
#include <list>
#include <cassert>
#include <climits>
using namespace std;

#define ll long long
#define pb push_back
#define loop(a) for(int i = 0; i < a; i++)
#define loopv(i,a) for (int i = 0; i < a; i++)
#define rep(i,a,b) for (int i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(6) << x
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> a,b;
int n;
bool ok(double mid)
{
    double t = mid ,l =-1e18,r=1e18;

    for(int i = 0; i <n; ++i)
    {
         l=max(a[i] - t*b[i],l);
         r = min(a[i] + t*b[i],r);

    }
    return l <= r;
}
int main(void) {
    fast_io;
    cin >> n;
    a.resize(n),b.resize(n);
    for(int i=0;i < n; ++i)
    {
        cin >> a[i] >> b[i];
    }
    double l=0, r= 1e18,mid;
    for(int i=0l; i <= 100; ++i)
    {
        mid =(l+r)/2;
        if(ok(mid))
            r = mid;
        else l = mid ;
    }
    cout<<setprecision(6) << l << endl;
    return 0;
}
