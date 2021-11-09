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
int n,k;
deque<int> d;
map<int,int> mp;
 void unstopable()
{
	cin >> n>> k;
    fore(i,0,n)
    {
        int a;
        cin >> a;
        if(mp[a])
        {
            continue ;
        }
      d.push_front(a);
      mp[a]++;
      if(d.size()> k)
      {
        int tmp = d.back();
            d.pop_back();
            mp[tmp] = 0;
      }
    }
    cout<<d.size()<<endl;
    while(d.size())
    {
        cout<<d.front()<<' ';
        d.pop_front();
    }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  
        
        unstopable();
    
}



// Nguyễn Bá Hà
