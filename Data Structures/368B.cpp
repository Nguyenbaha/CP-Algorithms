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
int n,m;
map<int,int> mp;

 void unstopable()
{
    cin >> n >> m;
	vector<int> a(n+1);
    vector <int> suff(n+2) ;
    suff[n+1] = 0;
    fore(i,1,n+1) // id: tu 1 - > n
    cin >> a[i];
    ford(i,n+1,1)
    {
        mp[a[i]]++;
        if(mp[a[i]] == 1)
            suff[i] = suff[i+1]+1;
        else suff[i] = suff[i+1];
    }
    /*fore(i,0,n+2)
    cout<<suff[i]<<' ';*/
    while(m--)
    {
        int t;
        cin >> t;
        cout << suff[t]<<endl;
    }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
  
}