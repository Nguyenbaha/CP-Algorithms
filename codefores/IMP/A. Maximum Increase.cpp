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

void sol()
{
   int n;
   cin>>n;
   int a[N];
   for(int i=0;i<n;++i)
    cin>>a[i];
   int  ans =1, cnt =1;
   for(int i=1;i<n;++i)
   {
       if(a[i] > a[i-1])
       {
            cnt++;
            ans  = max(ans, cnt);
       }
       else
       {
          cnt = 1;
           ans = max(ans,cnt);
       }
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
