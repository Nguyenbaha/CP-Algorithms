// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a,ThxDem=b;i>ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;



// here

 void unstopable()
{
	int n;
    cin >> n ;
    string a,b;
    cin >> a>> b;
    vector < int> x,y;
    for(char c: a)
        x.pb(c-48);
    for(char c: b)
        x.pb(c-48);
    int ans  = 0;
    fore(i,0,n)
        {
            int tmp = abs(a[i]-b[i]);
            tmp = (tmp>5 ? 10-tmp : tmp);
            ans += tmp;
        }
        cout <<ans;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   unstopable();
}


