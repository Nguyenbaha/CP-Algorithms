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
    string a,b;
    cin>>a>>b;
    int lcm = a.size()/__gcd(a.size(),b.size())*b.size();
    string ans="",res="";
    for(int i=0;i<lcm/a.size();++i)
        ans+=a;
    for(int i=0;i<lcm/b.size();++i)
        res+=b;
    if(res==ans)
    {
        cout<<res<<endl;

    }
    else cout<<-1<<endl;
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
