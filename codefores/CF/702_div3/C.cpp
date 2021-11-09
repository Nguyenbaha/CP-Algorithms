#include <bits/stdc++.h>
using namespace std;
 #define ll long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T;
// Here
bool ok( )
{

}
//here
ll n;
void sol()
{
    cin>>n;
    set<ll> s;
    for(ll i=1;i*i*i<=n;++i)
        s.insert(i*i*i);
    for(ll i=1;i*i*i<=n;++i)
    {
        if(s.count(n-i*i*i))
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    sol();
 }


}
