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
    string s; cin>>s;
    int k = s.size();
    int d1=0,d0=0;
    for(int i=0; i<s.size();++i)
        if(s[i] == '0') ++d0;
        else ++d1;
    if(d0 == 0 | d1==0) cout<<s<<endl;
    else {

            for(int i=0;i<k;++i) cout<<10;
             cout<<endl;
        }

    }


int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int tc; cin>>tc;
while(tc--)
ha();
return 0;
}





