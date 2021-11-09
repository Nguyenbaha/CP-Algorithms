// Nguyễn Bá Hà
 
#include <bits/stdc++.h>
using namespace std;
 
#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.rbegin(),s.rend()
 
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
 
 void unstopable()
{
    int n, k;
    cin >> n >> k;
    vector<pii> v;
    fore(i,0,n)
    {
        int l,r;
        cin >>  l >> r;
        v.pb({r,l});
    }
    sort(all(v));
    //cout<<"anns: "<<endl;
    /*for(auto e: v)
        cout <<e.fi <<' '<<e.se<<endl;
    return ;*/
    ll ans =0 , sum =0 ;
    multiset<int> ms;
    fore(i,0,n)
    {
        ms.insert ( v[i].se);
        sum += v[i].se;
        if(int(ms.size()) > k)
        {
            sum -= *ms.begin();
            ms.erase(ms.begin());
        }
        ans  = max(ans,sum*v[i].fi);
    }
    cout << ans;
}
 
signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
}