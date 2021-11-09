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
    string s; cin>>s;
    if( s.size() == 2) cout<<s<<endl;
    else
    {
        int x=s.size(); cout<<s[0]<<s[1];
        for(int i=2;i<x;i+=2)
        {
            if(s[i]==s[i-1]) cout<<s[i+1];
            else cout<<s[i-1]<<s[i]<<s[i+1];
        }
        cout<<endl;
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





