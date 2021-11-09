// Nguyễn Bá Hà
//'1348A.cpp'
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
 #define prec(n) fixed<<setprecision(n)
typedef unsigned long long ull;
#define ll int
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
// __gcd(n,0) = n;

// here

 void unstopable()
{
	ll n,q;
    cin >> n >> q;
    vector<ll> pos(56,0);
    vector<ll>a(n+1);
    fore(i,1,n+1)
    {
       cin >> a[i];
       if(pos[a[i]] == 0)
       pos[a[i]] = i;
    }
    while(q--)
    {
        ll t;
        cin >> t;
        cout <<pos[t]<<' ';
        fore(i,1,56)
            if(pos[i]!=0 && pos[i] < pos[t])
                pos[i]++;
        pos[t] =1;
        }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  
        
        unstopable();
  
}






