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

#define yes cout<<"Yes"<<endl;
#define no  cout<<"No"<<endl;

#define int long long
// here



 void unstopable()
{
    int n;
    cin >> n;
    vector<int> f(20);
    int ans =0 ;
    f[0] = 1;
    fore(i,1,11)
        f[i] = f[i-1]*i;
    for(int i=10; i>=1; --i)
    {
        while(n >= f[i])
            ans++, n-=f[i];
    }
    cout << ans;
    
}
/*10
999999917 999999914 999999923 999999985 999999907 999999965 999999914 999999908 999999951 999999979
*/
signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
}