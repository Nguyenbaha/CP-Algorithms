#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here

void sol()
{
  ll n;
  cin>>n;
  vector<ll > ans;
  ll a[2*n];
  ll f[2*n]={0};
  for(ll i=0;i<2*n;++i)
  {
      cin>>a[i];
      f[a[i]]++;
      if(f[a[i]]==1)
        ans.push_back(a[i]);
  }
  for(auto e: ans)
    cout<<e<<' ';
  cout<<endl;

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

