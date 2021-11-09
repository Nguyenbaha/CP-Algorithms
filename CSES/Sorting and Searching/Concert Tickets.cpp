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
 #define prec(n) fixed<<setprecision(n)
typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
// __gcd(n,0) = n;

// here
multiset<ll> ms;
 void unstopable()
{
    ll n,m;
    cin >> n>> m;
    fore(i,0,n)
    {
        ll t;
        cin >> t;
        ms.insert(-t);
    }
    while(m--)
    {
        ll a;
        cin >> a;
        auto it = ms.lower_bound(-a);
        if(it != ms.end())
        {
            cout<<-*it<<endl;
            ms.erase(it);
        }
        else
            cout<<-1<<endl;
    }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
 
        
        unstopable();
   
}

 






