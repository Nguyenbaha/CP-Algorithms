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
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
    map<string,string> mp;
int n,m; cin>>n>>m;
for(int i=0;i<m;++i)
{
    string a,b; cin>>a>>b;
    mp[a]=b;
}
for(int i=0;i<n;++i)
{
    string s; cin>>s;
    if(s.size() <= mp[s].size() ) cout<<s<<' ';
    else cout<<mp[s]<<' ';
}
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




