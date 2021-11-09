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

int tc; cin>>tc;
while(tc--)
{
    string s; cin>>s;
    vector<string> vs;
    for(int i=0;i<s.size();++i)
    {
        string t;
        if(s[i] != '0') {t+=s[i];
        for(int j=i;j<s.size()-1;++j)
            t+='0';
        vs.pb(t);}
    }
    cout<<vs.size()<<endl;
    for(auto e: vs)cout<<e<<" ";
    cout<<endl;
}
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




