#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int n;
ll m;
string s;


void Never_give_up()

{
 int i,j,k;

    cin>>n>>m;
    ll x=0;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        if(s=="half");
        else x|=(1LL<<i);
    }
    ll rs=0LL;
    while(x)
    {
        ll q=x/2;
        rs+=q*m;
        if(x&1LL)
        {
            rs+=m/2LL;
        }
        x/=2LL;
    }
    cout<<rs<<endl;

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
