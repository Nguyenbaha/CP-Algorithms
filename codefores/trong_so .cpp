#include <bits/stdc++.h>
using namespace std;
#define min_3(a,b,c) (min((a),min((b),(c))))
#define all(a) a.begin(),a.end()
#define pb push_back
#define mkp make_pair
#define forn(m,n) for (int i=m; i<n; ++i)
#define fi first
#define se second
#define sz(X) (int)(X).size()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{

ll n; cin>>n;
vector<ll> f(n+1);
f[0] = 0;
for(int i = 1; i<=n;++i)
{
    ll t; cin>>t;
    f[i] = f[i-1] + t;
}
ll sa = f[n]/2;



}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




