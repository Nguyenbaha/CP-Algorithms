#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here

void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=s.size();
    int cnt=0;
    for(int i=l-1;i>=0;--i)
        if(s[i]==')') cnt++;
        else break;
    int r = l-cnt;
    if(cnt>r) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}

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
