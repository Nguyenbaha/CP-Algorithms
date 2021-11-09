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
	int n,m;
    cin >>n >> m ;
    vector<int>a(n);
    fore(i,0,n)
        cin >> a[i];
        sort(all(a));
    vector<bool> used(n,false);
    while(m--)
    {
        int t;
        cin >> t;
        int pos = 0;
        int l=0,r = n-1;
        while(l <= r)
        {
            int mid=(l+r)>>1;
            if(a[mid] <= t && used[mid]==false)
            {
                pos = mid;
                l = mid+1;
            }
            else
                r = mid -1;
        }
        if(a[pos] <= t && used[pos]==false)
        {
            cout<<a[pos]<<endl;
            used[pos] = true;
        }
        else
            cout<<-1<<endl;
    }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  
        
        unstopable();
  
}






