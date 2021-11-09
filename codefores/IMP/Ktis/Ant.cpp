#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int l,n; cin>>l>>n;
    int mn=0,mx=0;
    while(n--)
    {
        int p; cin>>p;
        mn = max(mn,min(p,l-p));
        mx = max(mx,max(p,l-p));
    }
    cout<<mn<<' '<<mx<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


