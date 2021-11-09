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
   int cnt  = 0;

    if(n==2)
    {
        cout<<1;
        return;
    }
   while(n!=1)
   {
       if(n==2){cnt++;
            break;}
       if(n%3 == 2) n++,cnt++;
       else if(n%3 == 1) n--,cnt++;
       else n/=3,cnt++;
   }
   cout<<cnt;
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
