#include <bits/stdc++.h>
using namespace std;
 #define int unsigned long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( int x)
{
    return !(x&(x-1));
}

//here

void sol()
{
    int x,y;
    cin >> x >> y;
    if(x==y || y%x==0 || x%y==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
        cout<<"YES"<<endl;
    int X,Y,Z;

      Z = x*x*y;
      X = x*x;
      Y = Z- X;
      if(X-Y==0)
      {
      Z = x*x*y;
      X = x*2;
      Y = Z- X;
      }
      cout<<X<<' '<<Y<<' '<<Z<<endl;
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

