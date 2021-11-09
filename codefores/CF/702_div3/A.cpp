#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here

void sol()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int cnt  =0 ;
    for(int i=1;i<n;++i)
    {

        int mn = min(a[i],a[i-1]);
        int mx = max(a[i],a[i-1]);
        int c=1;
        while(mx*1.0/mn > 2)
        {
            mn *=2;
            c++;
            cnt++;
        }
    }
    cout<<cnt<<endl;
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
