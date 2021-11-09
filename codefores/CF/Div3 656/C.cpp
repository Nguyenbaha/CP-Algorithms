#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here

void sol()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll &i: a)cin>>i;
    ll pos = n- 1;
    while(pos >0 && a[pos-1] >= a[pos]) pos--;
    while(pos >0 && a[pos - 1] <= a[pos]) pos--;
    cout<<pos<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
    sol();
 }


}
