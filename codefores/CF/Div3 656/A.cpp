#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here

void sol()
{
  ll a[3];
  for( ll &i : a) cin>>i;
  sort(a,a+3);
  if((a[1]==a[2] && a[1]!=a[0] )|| (a[0]==a[1] && a[1]==a[2]))
  {
      cout<<"YES"<<endl;
  cout<<a[0]<<' '<<a[0]<< ' ' <<a[2]<<endl;
  return;
  }
  cout<<"NO"<<endl;

}
signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
    sol();
 }


}

