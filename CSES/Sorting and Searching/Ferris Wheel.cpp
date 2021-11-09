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
	ll n,k;
    cin >> n >> k;
    vector<ll> pre(n);
    fore(i,0,n)
    cin >> pre[i];
    sort(all(pre));
    ll l=0,r=n-1;
    int ans = 0;
    r = upper_bound(all(pre),k)-pre.begin()-1;
    while(l<=r)
    {
        if(pre[l] + pre[r] <= k)
        {
            ans++;
            l++;
            r--;
            /*cout<<pre[l]<<' '<<pre[r]<<endl;
            break;*/
        }
        else
        {
            ans++;
            r--;
        }
    }
    cout<<ans;

}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
   
}






