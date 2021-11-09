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
int a[21]={0};
 int n;
 void in()
 {
    for(int i=0;i < n; ++i)
    {
        cout << a[i];
    }
    cout << endl;
 }

void gen(int pos)
{
    for(int i=0; i< 2;++i)
    {
        a[pos] = i ;
        if(pos == n-1)
            in();
        else
            gen(pos+1);
    }
}

 void unstopable()
{


    cin >> n;
    int pos  =0 ;
    gen(pos);
   
  
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
}








