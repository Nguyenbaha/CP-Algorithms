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
    int n; cin>>n;
    vector<int> a;
    for(int i=1;i<(1<<19);++i)
    {
        ll s=0,number=0;
        for(int j=1;j<10;++j)
        {
            if((i>>j)&1)
            {
                s+=j;
                number = number*10 +j ;
            }
            if(s==n) a.push_back(number);
        }
    }
    if(a.size() < 1) cout<<-1<<endl;
    else
    {
        sort(a.begin(),a.end());
        cout<<a[0]<<endl;
    }
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

 return 0;
}
