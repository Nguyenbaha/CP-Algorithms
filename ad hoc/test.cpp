#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T=1;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
//here
int n;
void sol()
{
   cin>>n;
   vector<int> a(n+1),b(n+1);
       for(int i=1; i<=n; ++i)
   {
       cin >> a[i];
       b[a[i]] = i;
   }
   int mx = -1, mn = n+1;
   for(int i=1; i<=n; ++i)
   {
       mx = max(mx, b[i]-mn);
       mn = min(mn, b[i]);
   }
   cout<< mx;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //cin >> T;
    while(T--)
{
    sol();
 }


}
