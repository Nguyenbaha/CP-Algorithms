#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁


void Never_give_up()

{
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i)
        cin>>a[i];
    int ans=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i+=2)
       {
         int tmp=__gcd(a[i],a[i-1]);
         ans = min(ans,tmp);
       }
       int t = __gcd(a[0],a[n-1]);
        ans = min(ans,t);
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
