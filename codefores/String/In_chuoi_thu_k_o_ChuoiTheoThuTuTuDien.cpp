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
int n,k;
// Here
bool ok( )
{

}
//here

void sol()
{
   cin >> n>> k;
   string s(n,'a');
   for(int i= n - 2; i >= 0; --i)
   {
       int tmp = n - i- 1;
       if(k <= tmp)
       {
           s[n - k] = 'b';
           s[i] = 'b';
           cout<<s<<endl;
           return;
       }
        k -= tmp;
   }
   cout<<s<<endl;
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

