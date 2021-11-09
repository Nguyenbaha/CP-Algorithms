#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll ans=0,n,x,y;
    cin>>n>>x>>y;
    string s; cin>>s;
    for(int i=n-1;i>=0;--i)
    {
        if(x>0)
        {
            if(s[i]=='1') ans++;
            x--;
        }
        else break;
    }
    if(s[n-y-1]=='1') ans--;
    else ans++;
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



