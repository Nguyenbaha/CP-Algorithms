
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
string s;
map<char,int> f;

void Never_give_up()

{
    ll n; cin>>n;
    if(n==3 || n==2) cout<<"NO SOLUTION";
    else

    {
        ll a[n+1];
        for(int i=1;i<=n;++i)
            a[i]=i;
        for(int i=2;i<=n;i+=2)
            cout<<a[i]<<' ';
         for(int i=1;i<=n;i+=2)
            cout<<a[i]<<' ';
    }

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


