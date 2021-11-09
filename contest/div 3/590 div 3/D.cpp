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
string s;
int q;
vector<set<int>> PosSet(28);
 void unstopable()
{
    cin >> s>> q;
    for(int i=0; i < s.size(); ++i)
        {
            PosSet[s[i]-'a'].insert(i);
        }
    while(q--)
    {
        int t;
        cin >> t;
        if(t==1)
        {
            int pos;
            char c;
            cin >> pos>>c;
            pos--;
            PosSet[s[pos]-'a'].erase(pos);
            s[pos] = c;
            PosSet[s[pos]-'a'].insert(pos);
        }
        else
        {
            int l,r;
            cin >> l >> r;
            l--;r--;
            int cnt =0 ;
            for(int i=0; i < 26; ++i)
            {
                auto it = PosSet[i].lower_bound(l);
                if(it!=PosSet[i].end() && *it <= r)
                    cnt++;
            }
            cout<<cnt<<endl;
        }
    }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
  
}



