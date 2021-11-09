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

int n,k; cin>>n>>k;
int a[n];
for(int i=0;i<n;++i)cin>>a[i];
//if(k<n) cout<<"-1";

        int s=k;int cnt=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]>8)s-=8;
        else
        s-=a[i];
        cnt++;

        if(s<a[i] && i==n-1) cout<<-1;
    }
    if(s<0) cout<<-1;
    else
     cout<<cnt;



}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




