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
const int mod=1e6+5;
ll a[mod];
vector<ll> v;
//😁😁😁😁😁😁😁😁😁😁😁
ll snt()
{
        a[1]=a[0]=1;
    //for(int i=2;i<mod;++i)a[i]=0;
    for(ll i=2;i*i<mod;++i)
    {
        if(a[i]==0)
            for(ll j=i*i;j<mod;j+=i)
                a[j]=1;
    }
    for(ll i=2;i<mod;++i)
        if(a[i]==0) v.pb(i);
}
bool check( ll h)
{
    ll l=0,r=v.size(),mid;
    while(l<=r)
    {
        mid = (l+r)>>1;
        ll ok = v[mid]*v[mid];
        if(ok==h){ return true;}
        else if(ok > h) r = mid -1;
        else l = mid +1;
    }
    return false;
}
void ha()
{


}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

//ha();
snt();
int tc; cin>>tc;
while(tc--)
{    ll x; cin>>x;
    if(check(x)==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
return 0;
}




