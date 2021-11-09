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
   if(n < 10)
   {
       cout << n <<endl;
       return;
   }
   if(n == 10)
   {
       cout << 9 << endl;
       return;
   }
   vector<int> a;
   int nn = n;
   while(nn)
   {
       a.push_back(nn%10);
       nn/=10;
   }
   reverse(a.begin(),a.end());
   int sz = a.size();
   int res  = 0;
   int tm = a[0];
   for(int i=0 ; i < sz ; ++i)
   {
       res  += tm * (pow(10,i));
   }
   //cout<<res<<endl;
   int ans  = 9 * (sz - 1) + a[0];
   if(res > n) ans--;
   cout << ans<< endl;
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
