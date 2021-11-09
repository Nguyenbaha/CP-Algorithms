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
// sp by Ari
 void unstopable()
{
	int n;
    string a,b;
    vector<int> v1,v2, ans;
    cin >> n;
    
    cin >>a>>b;

    for(auto c: a)
        v1.pb(c-'a');
    for(auto c: b)
        v2.pb(c-'a');

    fore(i,0,n)
        ans.pb(v1[i]+v2[i]);
    ford(i,n,1)
        if(ans[i] >= 26)
        {
            ans[i]-=26;
            ans[i-1] ++;
        }
    for(int i=0; i< n; ++i)
    {

        cout<<char('a'+ans[i]/2);
        if(ans[i]%2)
            ans[i+1] += 26;
        // 388 /2 = 194;
        // 3/=1 mod 1, (8+10)/2=9 <10 ; 8/2
        // 10 --->> 26;
    }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
   
}
