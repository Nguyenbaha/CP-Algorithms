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
int n,m,k;
int a[N];
void sol()
{
   cin>>n >> m >> k;
   //m++;
   int cmp;
   int cnt = 0;
   int a[N];

   for(int i = 0; i < m ; ++i)
    cin>>a[i];
  cin>>cmp;
   for( int i= 0;  i < m ; ++ i)
   {
       int res  = cmp^a[i];
       int c = __builtin_popcount(res);
       if(c <= k) cnt++;
   }
   cout << cnt ;
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

