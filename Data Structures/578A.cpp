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
	int n;
    cin >> n;
    string s;
    cin >> s;
    string ans  = "0000000000";
    int l=0,r=9;
    for(char &c: s)
    {
        if(c=='L')
        {
            int pos= 0;
            while(ans[pos]=='1')
                pos++;
            ans[pos]='1';
        }
        else if(c=='R')
        {
            int pos=9;
            while(ans[pos]=='1')
                pos--;
            ans[pos]='1';
        }
        else
        {
            ans[c-'0']='0';
        }
    }
    cout << ans;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  
        
        unstopable();
  ;
}








