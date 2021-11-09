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

 void unstopable()
{
    int n;
    string s, a="" , b = "";
    cin >> n>> s;
    bool ok = 0; // !ok : not swap 
    // assert  : a >  b;
    fore(i,0,s.size())
    {
        // s[i] = 2;
        if(s[i] == '2')
        {
            if(!ok)
            {
                a.pb('1');
                b.pb('1');
                //ok = true;
            }
            else
            {
                a.pb('0');
                b.pb('2');
            }
            continue;
        }
        // s[i] = 1'
        if(s[i] =='1')
        {
            if(!ok)
            {
                a.pb('1');
                b.pb('0');
            }
            else
            {
                a.pb('0');
                b.pb('1');
            }
            ok = true;
            continue ;
        }
        // s[i] = 0'
        if(s[i] =='0')
        {
            a.pb('0');
            b.pb('0');
            continue ;
        }
    }
    cout<<a<<endl<<b<<endl;
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