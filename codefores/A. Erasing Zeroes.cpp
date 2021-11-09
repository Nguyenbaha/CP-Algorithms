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
        int ans=0;
        string s; cin>>s;
        int l=0,r=s.size()-1;
        while(s[l]=='0')l++;
        while(s[r]=='0')r--;
        for(int i=l;i<=r;++i)
            if(s[i]=='0')ans++;
        cout<<ans<<endl;
    }

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




