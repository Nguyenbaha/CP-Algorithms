// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a,ThxDem=b;i>ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;

ll fpow(long long a, long long b)
{
    long long res = 1;
    while(b)
    {
        if(b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

// here

 void sol()
{
    int n;
    cin >>  n;
    vector < int> a(n);
    fore(i,0,n)
    cin >> a[i];
    fore(i,0,n)
    {
        a.pb(a[i]);
    }
    int cnt = 0, ans = 0;
    fore(i,0,2*n)
    {
        if(a[i] == 1)
            cnt ++, ans = max(ans, cnt);
        else cnt =0 ;
    }
    cout << ans ;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
        sol();
  
}

