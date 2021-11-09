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
int a,b,n;
cin>>a>>b>>n;
int res=0,ans=0;
int aa=a,bb=b;
while(true)
{
    a+=b;++res;
    if(a>n)break;
}

while(true)
{
    bb+=aa;++ans;
    if(bb>n)break;
}
cout<<min(ans,res)<<endl;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int t; cin>>t;
while(t--)
ha();
return 0;
}





