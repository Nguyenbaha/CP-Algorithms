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
#define rall(s) s.rbegin(),rs.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 5e5+5;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
vector<ll> pre(MAXN);
// here
ll n;
ll cnt = 0;
ll ans = 0;
// 1 3 6 6 9
 void unstopable()
{
	cin >> n;
    pre[0] = 0;
    fore(i,1,n+1)
        {
            int t;
            cin >> t;
            pre[i] = pre[i-1] + t;
        }
    if(pre[n]%3 != 0)
    {
        cout <<0;
        return  ;
    }
    fore(i,1,n)
    {
        if(pre[i] == pre[n]*2/3)
            ans += cnt ;
        if(pre[i] == pre[n]/3)
            cnt++;
        
        //0 1 0 0
    }
    cout << ans;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  
        
        unstopable();
  
}






