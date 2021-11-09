
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
ll n;
cin>>n; ll x,y;
if(!(n&1) && n%4 != 0)
{
    cout<<"NO";
}
else
    if(n&1)
{
     x = (n-2)/2;
     y = n/2;
}
else {
    x = (4+n)/4;
    y =
}
cout<<"YES"<endl;
cout<<x<<" "<<y;

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




