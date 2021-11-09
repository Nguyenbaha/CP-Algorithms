#include <bits/stdc++.h>
using namespace std;
#define min_3(a,b,c) (min((a),min((b),(c))))
#define all(a) a.begin(),a.end()
#define pb push_back
#define mkp make_pair
#define forn(m,n) for (int i=m; i<n; ++i)
#define fi first
#define se second
#define sz(X) (int)(X).size()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;

void ha()
{
int n; cin>>n;
while(n--)
{
    int t; cin>>t;
    vector<int>v;
    set<int> s;
    while(t--){
        int n; cin>>n;
        s.insert(n);
        v.pb(n);
    }
    if(s.size()!=v.size()) cout<<0<<endl;
    else
    {
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=1;i<v.size();++i)
        {
            int x = v[i]-v[i-1];
            ans.pb(x);
        }
          sort(ans.begin(),ans.end());
          cout<<ans[0]<<endl;
    }
}
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





