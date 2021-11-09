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

#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;


// here

 void unstopable()
{
	int n,a,b;
    cin >>  n>>  a>> b;
    string s;
    cin >> s;
    int res = a*n;
    if(b >= 0)
    {
        cout << res + b*n<<endl;
    }
    else
    {
        int cnt = 0;
        //?? 0 1 2 : len(s) = 3;
        for(int i=0;i < s.size();++i)
        {
            if(s[i] != s[i+1])
                cnt ++;
            
        }
        //cout<<cnt;return;
        res += (cnt/2+1)*b; // a*n+b*(số lượng cần union)
        cout <<res<<endl;
    }

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