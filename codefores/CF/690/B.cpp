#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020

void Never_give_up()

{
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(s.size()<4) cout<<"NO"<<endl;
    else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
        cout<<"YES"<<endl;
    else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
        cout<<"YES"<<endl;
     else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0')
        cout<<"YES"<<endl;
         else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
        cout<<"YES"<<endl;
         else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
Never_give_up();
 }

 return 0;
}

