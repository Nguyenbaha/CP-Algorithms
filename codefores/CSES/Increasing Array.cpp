
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
    ll n,pre=0,ans=0,tmp;
    cin>>n;
    while(n--)
    {
        cin>>tmp;
        if(pre>tmp)
        {
            ans += pre - tmp;
        }
        else
            pre = tmp;
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


