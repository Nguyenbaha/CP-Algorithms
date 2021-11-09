#include <bits/stdc++.h>
using namespace std;


const int N = 1e6+6;
int base = 311;
long long mod  = 1e7+7;

int T=1;


// Here
string s;
int n, k;
long long p[N] ,h[N];
int ans = 1;
long long f[10000008] ;
long long gethash(int l, int r)
{
    return (h[r] - h[l-1]*p[r-l+1] +mod*mod)%mod;
    // get(l,r)
    // return h[r]-h[l-1*pow[r-l+1] +mod*mod]5md
}
bool ok(int mid)
{
    for(int i=0; i <= n-mid; ++i)
    {
        long long tmp = gethash(i,i+mid-1);
       f[tmp]++;
       if(f[tmp] >= k) 
        return true;
    }
    return false;
}
void unstoppable()
{
   cin >> n >> k >> s;
   p[0] = 1;
   for(int i=1; i <= n; ++i)
    p[i] = p[i-1]*base%mod;
// for(int i=1;i <= n;++i)
// pow[i] = pow[i-1]*base%mod;
// pow[0] = 1;

    for(int i=0; i < n; ++i)
        h[i] = (h[i-1]*base + s[i])%mod;
// h[i] = h[i-1]*base + s[i]
    int l = 0, r = n, mid;

    while(l <= r)
    {
        mid = (l+r) / 2;
        if(ok(mid))
        {
            ans  = mid;
            l = mid+1;
        }
        else 
            r = mid -1;
    }
    cout << ans;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   // cin >> T;
    while(T--)
{
    unstoppable();
 }


}

