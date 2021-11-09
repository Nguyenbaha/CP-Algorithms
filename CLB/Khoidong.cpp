#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here
 ll k,a,b,x,y;
void sol()
{
    cin>>k;
    cin>>a>>x;
    cin>>b>>y;
    cout << max((k-a)*x + (k-a-b)*y,(k-b)*y + (k-a-b)*x) << '\n';


}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
while(tc--)
{
    sol();
 }


}

