#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
string s[N];
int a[N];// chi phi
string st;
int ind[N];// chi so
ll n,k,m,x,minn,ans=0;
map<string, int> mp;

void Never_give_up()

{
    cin>>n>>k>>m;
    for(int i=1;i<=n;++i) cin>>s[i];
    for(int i =1;i<=n;++i) cin>>a[i];
    for(int i=1;i<=n;++i) mp[s[i]]=a[i];
    for(int i=1;i<=k;++i)
    {
        cin>>x;
        minn = INT_MAX;
        for(int j=1;j<=x;++j) cin>>ind[j];
        for(int j=1;j<=x;++j)
          if(a[ind[j]] < minn) minn = a[ind[j]];
        for(int j=1;j<=x;++j)
            mp[s[ind[j]]] = minn;
    }
    for(int i=1;i<=m;++i)
    {
        cin>> st;
        ans += mp[st];
    }
    cout<<ans;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


