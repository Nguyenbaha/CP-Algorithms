/*// Nguyễn Bá Hà

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
string s;
 void unstopable()
{
	cin >> s;
    set <char>st;
    vector<pair<char,int>> v;
    for(char c: s)
        st.insert(c);
    if(s.size() < 3)
    {
        out(0)<<endl;
        return ;
    }
    for(char c: s)
    {
        if(v.empty() || v.back().fi != c)
        {
            v.pb({c,1});
        }
        else
            v.back().se ++;
    }
    int ans = INT_MAX ;
    fore(i,1,v.size()-1)
    {
        if(v[i-1].fi != v[i+1].fi)
            ans = min(ans, v[i].se + 2);
    }
    cout<<(ans==INT_MAX ? 0 : ans)<<endl;
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
*/

//
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
string s;
 void unstopable()
{
    cin >> s;
    int ans = INT_MAX;
    int one=-1, two = -1, three = -1;
    set<char> st;
    for(char c: s)
    {
        st.insert(c);
    }
    if(st.size() < 3)
    {
        cout <<0<<endl;
        return  ;
    }
    fore(i,0,s.size())
    {
        if(s[i] == '1') one = i;
        else if(s[i] == '2') two = i;
        else three = i;
        if(one >= 0 && two >=0 && three >= 0)
        {
            ans = min(ans, max(one,max(two,three)) - min(one,min(three, two))+1);
        }
    }
    cout<<(ans==INT_MAX ? 0 : ans)<<endl;
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












