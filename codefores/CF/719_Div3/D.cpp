
#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
//here

void sol()
{
   int n;
   cin >> n;
   int ans = 0;
   map<int,int> mp;
   for(int i=1; i <= n ; ++i)
   {
       int tmp;
       cin>> tmp;
       mp[tmp-i]++;
   }
   for(auto el : mp)
   {
       if(el.second > 1)
        ans += (el.second*(el.second-1)/2);
   }
   cout << ans<<endl;
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
