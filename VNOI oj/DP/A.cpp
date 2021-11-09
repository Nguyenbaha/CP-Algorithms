
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n;
    cin >> n;
    vector<ll> a(n+6) ;
    vector<ll> f(n+6) ;
    for(int i=1;i <= n; ++i)
            cin >> a[i] ;
    f[0] = 0;
    f[1] = f[0] ;
    f[2] = f[1] + abs(a[2]-a[1]) ;
    for(int i=3;i <= n;++i)
    {
        f[i]  += min(f[i-1] + abs(a[i]-a[i-1]) , f[i-2] + abs( a[i-2] - a[i])) ;
    }
    cout << f[n] ;
} 
