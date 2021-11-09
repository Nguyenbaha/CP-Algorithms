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
        int k;
        cin>>k;
        vector<int>a(13);
        a[0] = INT_MAX;
        for(int i=1;i<=12;++i)
            cin>>a[i];
        sort(a.rbegin(),a.rend());
        int cnt  = 0;
        if(k == 0)
        {
            cout<<0;
            return;
        }
        for(int i=1;i<=12;++i)
        {
            k -= a[i];
             cnt++;
            if(k <=0 )
            {
                cout<<cnt;
               return;
            }
        }
        cout<<-1;
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
