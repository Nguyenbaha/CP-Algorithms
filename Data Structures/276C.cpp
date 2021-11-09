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
const ll N= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define minpq(s) priority_queue<int, vector<int>, greater<int>> = s;
// __gcd(n,0) = n;
// array prefix count in the number of time each number is calculated: hihi
// here
// lol dm: lại 1 lần nữa sai giới hạn của mảng
ll n,q,a[3*N],cnt[3*N],ans=0;
 void unstopable()
{
	cin>>n>>q;
    for(int i=0;i<n;i++)
        cin>>a[i];
    while(q--)
    {
        ll l , r;
        cin >> l >> r;
        cnt[l-1]++;
        cnt[r]--; 
    }
    fore(i,1,n+1)
        cnt[i]+=cnt[i-1];
    sort(a,a+n);
    reverse(a,a+n);
    sort(cnt,cnt+n);
    reverse(cnt,cnt+n);
    fore(i,0,n)
        ans+=(1ll*a[i]*cnt[i]);
    cout<<ans;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
}