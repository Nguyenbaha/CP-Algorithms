#include <bits/stdc++.h>
using namespace std;

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
   int m  = n;
   int a[n+5][5+m];
   if( n == 1)
   {
       cout << 1<<endl;
       return;
   }
   if( n== 2)
   {
       cout<< -1<<endl;
       return;
   }
   int tmp  = 1;
   for(int i=1; i<= n;++i)
   {
       for(int j= 1; j<= m; ++j)
       {
           a[i][j] = tmp;
           if(tmp &1)
           tmp += 2;
           else tmp -= 2;
           if( tmp == n*n )
            tmp = ;
       }
   }
   for(int i=1; i<= n;++i)
   {
       for(int j= 1; j<= m; ++j)
       {
           cout<<a[i][j]<< ' ';
       }
       cout<<endl;
   }
   cout<<endl;
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
