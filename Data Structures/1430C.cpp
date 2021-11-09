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

 void unstopable()
{
	ll n;
    cin >> n;
    deque <ll> d;
    fore(i,0,n)
        d.pb(i+1);
    if(n == 2)
    {
        cout << 2<<endl;
        cout <<"1 2"<<endl;
        return ;
    }
    int i = 0;
    vector<pii> ans;
    while(1)
    {
        if(int(d.size())==1)
            break;
      if(i == 0)
      {
        ll p1 = d.back();
        d.pop_back();
        ll p2 = d.back();
         d.pop_back();
        ll p3 = d.back();
         d.pop_back();
        ans.pb({p1,p3});
        d.pb(p2);
        d.pb((p1+p3+1)/2);
        i++;
    }
        else
        {
             ll p1 = d.back();
              d.pop_back();
             ll p2 = d.back();
              d.pop_back();
             
            ans.pb({p1,p2});
             
              d.pb((p1+p2+1)/2);
              i++;
        }
    }
    cout<<d.front()<<endl;
    for(auto e: ans)
        cout<<e.fi<<' '<<e.se<<endl;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   int q;
    cin >> q;
    while (q--){
        
        unstopable();
    }
    return 0;
}
