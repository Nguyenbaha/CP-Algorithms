#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll n; cin>>n; ll cnt=0;
    vector<ll> v1(2*n),v2;
    for(auto &i: v1)cin>>i;
    while(v1.size()!=0)
    {
        if(v2.size()==0)
        {
            v2.push_back(v1.back());
            v1.pop_back(); cnt++;
            continue;
        }
        if(v1.back()==v2.back())
        {
            cnt++;
            v1.pop_back();
            v2.pop_back();
            continue;
        }
        v2.push_back(v1.back());
        cnt++;
        v1.pop_back();
    }
    if(v2.size()!=0)
        cout<<"impossible";
    else cout<<cnt;

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


