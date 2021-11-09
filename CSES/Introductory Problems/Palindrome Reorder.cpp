#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 string s, cur="";
 int cnt=0;
 map<char,int> mp;
 vector<char> v;
 char res =' ';
void sol()
{
    cin>>s;
    for(char c: s)
        mp[c]++;
    for(auto e: mp)
    {
        if(e.second % 2 !=0) cnt++;
    }
    if(cnt > 1)
    {
        cout<<"NO SOLUTION";
        return;
    }
    for(auto e: mp)
    {
        if(e.second %2 == 0)
        {
            for(int i=1;i<=e.second/2;++i)
            v.push_back(e.first);
        }
        else
        {
            if(e.second ==1)
            {
                res = e.first;
            }
            else {
                for(int i=1;i<=e.second;++i)
                {
                    char t = e.first;
                    cur += t;
                }
            }
        }
    }
    for(auto e: v)
        cout<<e;
    if(res !=' ') cout<<res;
    else if(cur!="") cout<<cur;
    for(int i=v.size()-1;i>=0;--i)
        cout<<v[i];
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
