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
#define minpq(s) priority_queue<int, vector<int>, greater<int>> = s;
// __gcd(n,0) = n;

// here

 map<ll,ll> mp;
vector<pair<ll, pair<ll,ll>>> ans ;
ll n;
 void unstopable()
{
    cin >> n;
    vector<ll> a(n);
    fore(i,0,n)
    {
        cin >> a[i] ;
        mp[a[i]] ++;
    }

    ll res = 0;
    ll mx = 0;
    for(auto e: mp)
    {
        if(e.se > mx)
        {
            mx = e.se ;
            res = e.fi;
        }
    } 
    //      <<<<----obtain-- ->>>
    ll id =  0;
    fore(i,0,n)
    {
        if(a[i] == res)
        {
            id =  i;
            break;
        }
    }
cout<< n- mp[res]<<endl;
    for(int i = id; i > 0; --i)
    {
        if(a[i] == a[i-1])
            continue ;
        if(a[i] > a[i-1])
        {
            // type 1;
            a[i-1] += abs(a[i]-a[i-1]);
            cout<<1<<' '<<i-1+1<<' '<<i+1<<endl;
        }   
        else
        {
            a[i-1] -= abs(a[i]-a[i-1]);
            cout<<2<<' '<<i-1+1<<' '<<i+1<<endl;
        }
    }
// right
    for(int i = id+1; i < n; ++i)
    {
        if(a[i] == a[i-1])
            continue ;
        if(a[i] > a[i-1])
        {
            // type 1;
            a[i] -= abs(a[i]-a[i-1]);
            cout<<2<<' '<<i+1<<' '<<i<<endl;
        }   
        else
        {
            a[i] += abs(a[i]-a[i-1]);
            cout<<1<<' '<<i+1<<' '<<i<<endl; 
        }
    }
    
}
signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        unstopable();
  
}
