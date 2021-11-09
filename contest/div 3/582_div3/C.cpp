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
#define rall(s) s.rbegin(),rs.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
/*🙈Xin gọi E là 🌞
Vì yêu E A chỉ thấy sáng suốt🤣*/

// here

 void unstopable()
{
	ll n,m;
    cin >> n >> m;
    if(n < m)
    {
        cout<<0<<endl;
        return ; 
    }
    else
        if(n == m)
        {
            string s = to_string(n);
            cout<<s[s.size()-1]<<endl;
            return ;
        }

    // remain:
        n/=m;
        vector<int> digits(11,0);
        fore(i,0,10)
            digits[i] = (i+1)*m%10;
        ll sum =0;
        /*fore(i,0,n%10)
        cout<<digits[i]<<' ';
        return ;
*/        fore(i,0, n%10)
            sum += digits[i];

        ll ans = sum + n/10*accumulate(digits.begin(), digits.end(),0LL);
        cout << ans<<endl;

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







