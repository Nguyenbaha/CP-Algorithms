// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
// __gcd(n,0) = n
typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl


// here
ll n;

ll x= 0, y ;
ll ans=0;
 void unstopable()
{
	cin >> n;
    vector<ll> a(n);

    fore(i,0,n)
        cin >> a[i];
    sort(all(a));
    y=0;
    vector<ll> b(n+1);
    b[0]= 0;
    fore(i,1,n)
        b[i] = a[i]-a[i-1];
    /*fore(i,0,n+1)
        cout<<b[i]<<' ';
        return ;*/
    fore(i,1,n)
    {
        if(y==0) y = b[i];
        else y=__gcd(y,b[i]);
    }
    ll res = *max_element(a.begin(),a.end());
    ll last = 0;
    fore(i,0,n)
    {
       
        ll tmp = (res - a[i])/y;
        ans+=tmp;
      
       
    }
    cout<<ans<<' '<<y;

}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  unstopable();
        

}





