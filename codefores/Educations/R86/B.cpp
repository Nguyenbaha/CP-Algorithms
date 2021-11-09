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
    bool ok=true;
    for(int i=1;i<s.size();++i)
        if(s[i]!=s[0]) ok = false;
    if(ok)
    cout<<s;
    else
        for(int i=0;i<s.size();++i)
        cout<<"10";
    cout<<endl;
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
