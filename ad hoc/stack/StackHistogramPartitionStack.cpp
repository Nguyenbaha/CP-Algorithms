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
    stack<int> st;
    int n;
    cin>> n;
    int cnt = 0;
    for(int i=1; i<=n; ++i)
    {
        int tmp;
        cin >>tmp;
        while(!st.empty() && st.top() > tmp )
        {
            st.pop();
            cnt++;
        }
        while(st.empty() || st.top() < tmp)
            st.push(tmp);
    }
    cout<< cnt + st.size();
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
