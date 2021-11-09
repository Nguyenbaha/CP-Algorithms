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
ll n; cin>>n;
ll s1 = 1<<n; ll s2=0;
for(ll i=1;i<n/2;++i)s1+=(1<<i);

for(ll i=n/2;i<n;++i) s2+=(1<<i);
cout<<s1-s2<<endl;
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
ll x; cin>>x;
while(x--)
ha();
return 0;
}





