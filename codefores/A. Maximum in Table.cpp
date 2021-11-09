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
ll n; cin>>n; ll a[n][n];
for(ll i=0;i<n;++i)
    for(ll j=0;j<n;++j)
        if(i==0||j==0) a[i][j]=1;
        else a[i][j]=a[i-1][j] + a[i][j-1];

 cout<<a[n-1][n-1];
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





