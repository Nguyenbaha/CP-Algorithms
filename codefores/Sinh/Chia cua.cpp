#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 int n, a[20];
 ll s1=0,s2=0,res=INT_MAX;
void sol()
{
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<(1<<n);++i)
    {
        ll alice=0,bob=0;
        for(int j=0;j<n;++j)
        {
            if((i>>j)&1)
                alice+=a[j];
            else bob+=a[j];
        }
        if(alice < bob) swap(alice,bob);
        if(res > alice - bob)
        {
            res = alice - bob;
            s1 = alice, s2=bob;
        }
    }
    cout<<s1<<' ' <<s2;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
while(tc--)
{
    sol();
 }

 return 0;
}
