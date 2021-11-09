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
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
/*🙈Xin gọi E là 🌞
Vì yêu E A chỉ thấy sáng suốt🤣*/

// here
vector<ll> v[2*MAXN];
ll n,k;
ll ans = INT_MAX;
 void unstopable()
{
    cin >> n >>  k;
    vector<ll> a(n);
    fore(i,0,n)
    {
        cin >> a[i];
        ll cnt = 0;
        while(a[i])
        {
          
            v[a[i]].pb(cnt);
            cnt ++;
            a[i] >>=1;
        }
    }

    fore(i,0,2*MAXN)
    {
        if(v[i].size() >= k)
        {
            sort(all(v[i]));
            ans = min(ans, accumulate(v[i].begin(),v[i].begin() + k, 0LL));
        }
    }
    cout <<ans;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
   
}







