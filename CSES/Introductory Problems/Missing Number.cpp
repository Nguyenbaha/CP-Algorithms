#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here

void sol()
{
    ll n;
    cin>>n;
    vector<int> a,b;
    int c=0;
    for(int i=1;i<=n-1;++i)
    {
        int t;
        cin>>t;
        a.push_back(t);
        if(t==1) c=1;
    }
    if(c==0)
    {
        cout<<1; return;
    }
     for(int i=1;i<=n;++i)
    {

        b.push_back(i);
    }
    sort(a.begin(),a.end());
     sort(b.begin(),b.end());

    for(int i=1;i<=n-1;++i)
        if(a[i]!=b[i])
    {
        cout<<b[i];
        break;
    }
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

