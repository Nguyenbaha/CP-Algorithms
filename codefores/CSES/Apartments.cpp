#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll n,m,k; cin>>n>>m>>k;

    int a[n+1],b[n+1];
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=1;i<=m;++i)cin>>b[i];
    int i=1,j=1; int ans=0;
    sort(a+1,a+1+n);
    sort(b+1,b+1+n);
    while(i<=n && j<=m)
    {
        ll res = abs(a[i]-b[j]);
        if(res<=k) ans++,i++,j++;
        else
        {
            if(a[i]>b[j]) j++;
            else if(a[i]<b[j]) i++;
        }
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



