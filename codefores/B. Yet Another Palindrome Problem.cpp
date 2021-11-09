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
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)
        for(int j= i+2; j<n;++j)
    {
        if(a[i] == a[j]) {cout<<"YES"<<endl; return ;}
    }
    cout<<"NO"<<endl;

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int tc; cin>>tc;
while(tc--)
{ha();}
return 0;
}




