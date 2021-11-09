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

int n = s.size();

int ab=0,ba=0,aba=0;

if(n<4) cout<<"NO",exit(0);

for(int i=0;i<n;++i)
{
    if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'A' || s[i] == 'B' && s[i+1] == 'A' && s[i+2] == 'B')
    {
        aba++;
        i+=2;
    }
    else if(s[i] == 'A' && s[i+1] == 'B') ab++;
    else if(s[i] == 'B' && s[i+1] == 'A') ba++;
}

    if(aba >=2) cout<<"YES";
    else if(ab && ba) cout<<"YES";
    else if( ab && aba) cout<<"YES";
    else if(ba && aba) cout<<"YES";
    else cout<<"NO";
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





