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

ll tc; cin>>tc;
while(tc--)
{
    int a,b,n;
    cin>>a>>b>>n;
int cnt=0;
if(a>b) swap(a,b);
    while(true)
    {
        if(a>n || b>n) break;

        a+=b;
        if(a>b) swap(a,b);cnt++;

    }
   cout<<cnt<<endl;
}
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





