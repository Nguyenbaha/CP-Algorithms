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
#define out(x) cout << x 
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
/*🙈Xin gọi E là 🌞
Vì yêu E A chỉ thấy sáng suốt🤣*/

// here
#define int long long
 void unstopable()
{
	int a,b;
    cin >> a>> b;
    if(a>b)
        swap(a,b);
    // assert: a< b;

    int f[13];
    f[0] = 1;
    fore(i,1,13)
        f[i] = f[i-1]*i;
    /*fore(i,0,13)
    cout<<f[i]<<' ';
    return ;*/
    cout<<f[a];
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        unstopable();
  
}




