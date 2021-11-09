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
    ll n, cnt=1,ans=0; cin>>n; ll a[n-1];
    for(ll i = 0; i<n;++i)
    {
        cin>>a[i];
        if(a[i] != 0)
        {
            if(a[i] > a[i-1]){
                cnt++;
                ans= max(ans,cnt);
            }
            else{
               cnt=1;
            }
        }
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




