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
int n;
stack<int> s;
vector<int> h,l,r,dt;
void sol()
{
   cin>>n;
   h.resize(n+1);
   l.resize(n+1);
   r.resize(n+1);
   dt.resize(n+1);
   for(int i=1;i<=n;++i)
    cin>>h[i];
   for(int i=1;i<=n;++i)
   {
       while(!s.empty() && h[s.top()] >= h[i])
        s.pop();
       l[i] = s.empty() ? 0 : s.top();
       s.push(i);
   }
   while(!s.empty())
    s.pop();
   for(int i=n;i>=1;--i)
   {
       while(!s.empty() && h[s.top()] >= h[i])
        s.pop();
       r[i] = s.empty() ? n+1 : s.top();
       s.push(i);
   }
//   cout<<"L[i]: ";
//   for(int i=1;i<=n;++i)
//    cout<<l[i] <<' ';
//   cout<<endl;
//   cout<<"R[i]: ";
//   for(int i=1;i<=n;++i)
//    cout<<r[i]<<' ';
    int ans =LONG_MIN;
    for(int i=1;i<=n;++i)
    {
        dt[i] = 1LL*(r[i]-l[i]-1)*h[i];

    }
    cout<<*max_element(dt.begin()+1,dt.begin()+1+n);
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
