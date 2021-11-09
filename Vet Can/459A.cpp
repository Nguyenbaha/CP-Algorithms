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
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
/*🙈Xin gọi E là 🌞
Vì yêu E A chỉ thấy sáng suốt🤣*/

// here

 void unstopable()
{
	int x1, x2, y1, y2;
    cin >> x1>> y1 >> x2>> y2;
    if(x1!=x2 && y1!=y2 & abs(x1-x2)!=abs(y1-y2))
    {
        cout << -1;
    }   
    else
        if(x1 == x2)
        {
            cout << x1 + abs(y1-y2) <<' '<<y1<<' '<<x2+abs(y1-y2)<<' '<< y2;
        }
    else if(y1 == y2){
        cout << x1 << ' '<< y1+abs(x2-x1)<< ' '<<x2 <<' '<< y2+abs(x2-x1);
    }
    else cout <<  x1<< ' '<< y2<< ' '<< x2 <<' '<<y1;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
}








