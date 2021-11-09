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
   int n,k;
   cin>>n>>k;
   vector<int> a(n);
   for(int &i: a)cin>>i;
    int i=0;
   while(i<n-1 && k)
   {
       int mn = min(a[i],k);
       a[i]-=mn;
       a[n-1]+=mn;
       k-=mn;
       i++;
   }
  print(a);
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
