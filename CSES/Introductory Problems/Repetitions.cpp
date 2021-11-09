#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 string s;
 int cnt=1,ans =1;
void sol()
{
    cin>>s;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
        else{
            ans = max(ans,cnt);
            cnt=1;
        }
    }
    cout<<ans;
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
