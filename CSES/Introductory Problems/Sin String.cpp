#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 vector<char> v;
 vector<string> ans;
void sol()
{
    string s;
    cin>>s;
    for(char c: s)
        v.push_back(c);
    sort(v.begin(),v.end());
    do
    {
        string tmp="";
        for(auto e: v) tmp+=e;
        ans.push_back(tmp);
    } while(next_permutation(v.begin(),v.end()));
    cout<<ans.size()<<endl;
    for(auto e: ans) cout<<e<<endl;
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

