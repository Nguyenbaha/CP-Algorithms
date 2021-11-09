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

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;



// here

 void unstopable()
{
	int n, s;
    cin >>  n >> s;
    vector<int>a(n);
    fore(i,0,n)
    {
        cin >> a[i];
    }
   ll res = 0,l =0 , ans = 0;
   fore(i,0,n)
   {
        res+=a[i];
        while(res > s)
        {
            res-=a[l];
            l++;
        }
        ans = max(ans,i-l+1);
   }
   cout << ans;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
}
