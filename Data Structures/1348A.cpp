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
int n,k;

 void unstopable()
{
    set<int> s;
	cin >> n>> k;
    vector<int>a(n);
    for(auto &e: a)
    {
        cin >> e;
        s.insert(e);
    }
    if(int(s.size()) > k)
    {
        out(-1)<<endl;
        return   ;
    }
    cout<< n*k<<endl;
    int tmp = k -ll(s.size());
    while(n--)
    {
        for(auto e: s)
            cout<<e<<' ';
        fore(i,0,tmp)
        cout<<1<<' ';
    }
    cout<<endl;
    
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






