
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
int a,b; char c; int n;
cin>>a>>c>>b;
cin>>n;
int res = b+n;
    ll tmp=res/60; a+=tmp;
if(a%24<10) cout<<0<<a%24<<c; else cout<< a%24<<c;
if(res%60 <10) cout<<0<<res%60; else cout<<res%60;

//cout<< a%24<<c<<res%60;
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


