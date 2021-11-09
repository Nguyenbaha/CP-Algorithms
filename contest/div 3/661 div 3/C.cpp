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

     void unstopable()
{
	   int n, ans=0;
        cin >>n;
        vector <int> a(n);
        fore(i,0,n)
            cin >> a[i];
        sort(all(a));
        fore(i,2,101)
        {
            int l =0,r =n -1, cnt =0;
            while(l < r)
            {
                if(a[l]+a[r] == i)
                {
                    cnt ++;
                    l++;
                    r--;
                }
                else if(a[l] + a[r] > i )
                    r--;
                else l++;
            }
            ans= max(ans,cnt);
        }
        cout<<ans<<endl;
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




