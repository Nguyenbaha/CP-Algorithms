#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here

void sol()
{
  string s;
  cin>>s;
  if(s.size() & 1)
  {
      cout<<"NO"<<endl;
      return;
  }
  if(s[0]==')' || s.back()=='(')
    cout<<"NO"<<endl;
  else cout<<"YES"<<endl;


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
