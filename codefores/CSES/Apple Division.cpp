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
    ll c=0,b=0;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a,a+n);
    if(n==2)
    {
         cout<<abs(a[1]-a[0]); return;
    }
    for(int i=0;i<n;i+=2)
        b+=a[i];
    for(int i=1;i<n;i+=2)
        c+=a[i];
    cout<<abs(b-c);
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc=1;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



