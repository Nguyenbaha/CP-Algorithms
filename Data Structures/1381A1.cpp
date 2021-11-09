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
    int n;
    cin >> n;
    string a,b;
    cin >> a>>b;
    if(a==b)
    {
        cout <<0<<endl;
        return ;
    }
    vector<int> ans;
    fore(i,0,n)
        if(a[i] != b[i])
        {
            if(i > 0)
                ans.pb(i+1);
            ans.pb(1);
            if(i>0)
                ans.pb(i+1);
        }
    cout<<ans.size()<<' ';
    for(auto e: ans)cout<<e<<' ';
        cout<<endl;
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







