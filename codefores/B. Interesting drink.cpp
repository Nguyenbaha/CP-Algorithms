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
int a[100005];
void bs(int k,int n)
{
    int l=0,r=n,mid,res;
    while(l<=r)
    {
        mid = (l+r)>>1;
        if(a[mid] <= k) res=mid,l=mid+1;
        else r = mid -1;
    }
    cout<<res<<endl;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int n; cin>>n;
for(int i=1;i<=n;++i) cin>>a[i];
int q; cin>>q;
while(q--)
{
    int x; cin>>x;
    bs(x,n);
}
return 0;
}




