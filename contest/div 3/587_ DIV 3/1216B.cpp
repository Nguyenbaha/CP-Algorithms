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

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl


// here
int n;
string s;
int ans = 0, cnt =0 ;
 void unstopable()
{
	cin >> n;
    vector<int>a(n);
    vector<pii> v;
    fore(i,0,n)
    {
        cin >> a[i];
        v.pb({a[i],i+1});
    }
    sort(rall(v));
    fore(i,0,n)
    {
        ans += (v[i].fi*cnt+1);
        cnt++;
    }
    cout << ans<<endl;
    for(auto e: v)
        cout<<e.se<<' ';

}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  unstopable();
        

}





