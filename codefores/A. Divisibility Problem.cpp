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
while(n--)
{
    int a,b,cnt=0; cin>>a>>b;
    if(a%b==0) {cout<<0<<endl; continue;}
    else if(a-b<0) {
        int ans = b-a; cout<<ans<<endl;
    }
    else {
        int d=a/b+1;
        b*=d;
        cout<<b-a<<endl;
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





