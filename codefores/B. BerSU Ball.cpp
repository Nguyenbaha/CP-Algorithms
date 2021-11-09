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

void ha()
{
ll a,b,cnt=0;
cin>>a; vector<ll> B;
for(ll x=0; x<a;++x) {int i;cin>>i;B.pb(i);}
sort(B.begin(),B.end());
cin>>b; vector<ll> G;
for(ll x=0; x<b;++x) {int i;cin>>i;G.pb(i);}
sort(G.begin(),G.end());
for(ll i=0;i<a;++i)
    for(ll j=0;j<b;++j)
        if(abs(B[i]-G[j]) < 2)
{
      cnt++; G[j] = 10000;
    break;
}
cout<<cnt;
}

int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





