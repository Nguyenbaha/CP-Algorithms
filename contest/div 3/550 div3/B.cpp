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
ll s =0, n;
ll odd=0,even=0;
 void unstopable()
{
	cin >> n;
    vector<ll> a(n);
    for(auto &e: a)
    {
        cin >> e;
        if(e&1)
            odd++;
        else 
            even++;
    }
    if(abs(odd-even) ==0 || abs(odd-even) ==1)
    {
        cout<<0;
        return ;
    }
    ll m = min(odd,even);
    vector<ll> ans;
    if(odd < even)
    {
        for(auto e: a)
            if(!(e&1))
                ans.push_back(e);
        sort(rall(ans));
        fore(i,m+1,ans.size())
            s+=ans[i];
    }
    else
    {
        for(auto e: a)
            if(e&1)
                ans.push_back(e);
        sort(rall(ans));
        fore(i,m+1,ans.size())
            s+=ans[i];
    }
    cout<<s;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  
        
        unstopable();
    
}
