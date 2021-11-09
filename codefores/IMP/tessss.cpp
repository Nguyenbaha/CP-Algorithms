
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
  int n,ans;
  cin>>n;
  vector<int> a(n);
  for(int &i: a)
    cin>>i;
  sort(a.rbegin(),a.rend());
  int hx= h[0];
  if(n==2 && h[n-1]!=hx || ((sum&1) && (n&1)))
  {
      cout<<"-1"<<endl;
      return 0;
  }
  int t =0 ;
  for(int i=1; i<n;++i)
  {
      h[i] += t;
      t = hx - h[i];
  }
  int hm = h[n-1];
  t =((int)(n-1)*(hx-hm)+n-3)/(n-2);
  hx = hm + t;
  if(((int)n*hx-sum)%2) ++hx;
  ans = (((int)n*hx-sum))>>1;
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
