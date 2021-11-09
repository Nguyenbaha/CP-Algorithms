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
int n,k;
vector<int> a;
// Here
bool ok( int mid)
{
    int res = 0;
    for(int i=(n+1)/2; i<=n ;++i)
    {
        if(mid - a[i] > 0)
            res += (mid-a[i]);
        if(res > k) return false;
    }
    if(res > k) return false;
    else return true;
}
//here

void sol()
{
   cin>>n>>k;
   a.resize(n+1);
   for(int i=1;i<=n;++i)
    cin>>a[i];
   sort(a.begin(),a.end());
   int l=1,mid,r=2e9+6;
   int ans = 0;
   while(l<=r)
   {
       mid = (l+r)/2;
       if(ok(mid))
       {
           ans  = mid;
            l = mid + 1;
       }
       else
        r = mid -1;
   }
   cout<<ans;
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
