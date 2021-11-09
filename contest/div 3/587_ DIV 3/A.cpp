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


// here
int n;
string s;
int ans = 0, cnt = 0; // abbbaa
 void unstopable()
{
	cin>> n>> s;
    for(int i=0; i < n/2; ++i)
        {
           // cout <<i*2<<' '<<i*2+1<<endl;
            if(s[i*2] == s[i*2+1])
            {
                ans++;
                if(s[i*2]=='a')
                    s[i*2]='b';
                else
                    s[i*2]='a';
            }
        }
    cout<<ans<<endl<<s;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  unstopable();
        

}





