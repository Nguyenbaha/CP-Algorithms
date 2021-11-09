// Nguyễn Bá Hà
// O^2
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
	int n;
    cin >>  n;
    vector< int > a(n+6), b(n+6);
    vector<int> pos(n+6) ;
    map<int,int> mp;
    int mx = 0 ;
    fore(i,0,n)
        {
            cin >> a[i];
            pos[a[i]] = i+1;
        }
    fore(i,0,n)
    {
        cin >> b[i];
        int tmp = i+1 - pos[b[i]];
        if(tmp < 0)
            tmp +=n;
        mp[tmp]++;
    }
    for(auto e: mp)
        mx = max(mx,e.se);


    cout << mx;


}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  
        
        unstopable();
  ;
}








