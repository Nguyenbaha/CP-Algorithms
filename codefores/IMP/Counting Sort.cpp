
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
// 5
//  5 4 3 2 1
ii: 0 1 2 3 4 5 6
b :    1  1  1  1 1
void sol()
{
   int n;
   cin>>n;
   int a[N];
   int k = 0;
   for(int i=0;i<n;++i)
    {
        cin>>a[i];
        k = max(k,a[i]);
    }
    int ans[k+1],b[k+1]={0};
    for(int i=0;i<n;++i)
        b[a[i]]++;
    int j=0;
    for(int i=0;i<=k;++i)
    {
        if(b[i])
            while(b[i]--)
            {
                ans[j] = i;
                j++;
            }

    }
    for(int i=0;i<=k;++i)
       if(a[i]) cout<<ans[i]<<' ';
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
