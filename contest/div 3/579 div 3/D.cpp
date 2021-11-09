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
const ll MAXN= 2e5+6;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;

#define out(x) cout<<x
#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define int long long

// here



 void unstopable()
{
// abbbba aba
    string s,t;
    cin >> s>> t;
    if(s==t)
    {
        out(0);
        return ;
    }
    vector <int> pre(MAXN), suff(MAXN);
    pre[0] = -1;
    suff[t.size()] = s.size();
    int ans =0;

    int pos = 0;
    for(int i=0; i < t.size(); ++i)
    {
        while(s[pos] != t[i])
            pos++;
        pre[i+1] = pos;
        pos++;
    }

    pos = s.size()-1;
    for(int i = t.size()-1; i >=0; --i )
    {
        while(s[pos] != t[i])
            pos--;
        suff[i] = pos;
        pos--;
    }
    fore(i,0,t.size()+1)
        ans = max(ans, suff[i] - pre[i]-1);

    out(ans);
 }

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
      
        unstopable();
    
}