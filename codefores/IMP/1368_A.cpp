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
   int a,b,n;
   cin>>a>>b>>n;
   int cnt  = 0, cnt1=0;
   int e=a,f=b;
   if(a<b) swap(a,b);
   while(b <= n || a <= n)
   {
       if(a<b) swap(a,b);
       b+=a;
       cnt++;
   }
   cout<<cnt-1<<endl;
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

