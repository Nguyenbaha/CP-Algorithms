#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here

void sol()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    bool b1=true;

    bool b=false;
    for(int i=1;i<s.size();++i)
        if(s[i]-s[i-1] != 1)
        {
            b = true;
            break;
        }
    if(b==true && m<n)
        cout<<"Yes";//<<endl;
    else cout<<"No";
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

