#include <bits/stdc++.h>
using namespace std;

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
   int a[n+1];
   for(int i=1;i <= n; ++i)
    cin>>a[i];
   stack<int> st;
   for(int i=1 ;i <=n ;++i)
   {
       while( !st.empty() &&  (a[st.top()] <= a[i]))
        st.pop();
       int ans =  -1 ;
       if(!st.empty())
        ans = st.top();
       cout<<ans<<' ';
       st.push(i);
   }
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
