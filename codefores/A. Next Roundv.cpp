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
int n,k; cin>>n>>k;
int a[n];
int d=0;
for(int i=0;i<n;++i)cin>>a[i];
for(int i=0;i<n;++i)
{
    if(a[i] > 0 && a[i]>=a[k-1]) d++;
}
cout<<d;
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





