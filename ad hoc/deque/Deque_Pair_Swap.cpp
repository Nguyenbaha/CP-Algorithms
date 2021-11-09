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
deque <int> dq;
vector <int> v;
int n,k;
void sol()
{
   cin >> n >> k;
   v.resize(n);
   for(auto &e: v)
    cin >> e;
   for( int i=1; i<k; ++i)
   {
       while( !dq.empty() && v[dq.back()] >= v[i])
       dq.pop_back();
        dq.push_back(i);
   }
   for( int i=0; i< n; ++i)
   {
       while(!dq.empty() && i+k < n && v[dq.back()] >= v[i+k])
        dq.pop_back();
       dq.push_back(i +k);
       if( i == dq.front())
       dq.pop_front();
       if( v[i] > v[dq.front()])
       {
           swap(v[i],v[dq.front()]);
           break;
       }
   }
   print(v);
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
