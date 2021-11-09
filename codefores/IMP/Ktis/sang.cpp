#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<ll> ans;
bool check(ll n){
    for(ll i=2;i*i<=n;i++)
        if(n%i==0)return false;
    return true;
}
void Never_give_up()

{
        int n=1811;
        if(check(n)) cout<<1;
        else cout<<2;
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


