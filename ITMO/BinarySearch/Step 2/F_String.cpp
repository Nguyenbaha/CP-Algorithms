#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
 string p,t;
 vector<int>a;
 bool ok(int n)
 {
     string s="",tmp;
     tmp=p;
     for(int i=0;i<n;++i)
        tmp[a[i]-1] = '0';
    for(int i=0;i<tmp.size();++i)
        if(tmp[i]!='0')
            s+=tmp[i];
           // cout<<"n: "<<n<<"s "<<s<<endl;
    int i,j;
    i=j=0;
    while(i<s.size() && j<t.size())
    {
        if(s[i]==t[j])
            j++;
        i++;
    }
    return j==t.size();
 }
void sol()
{
    cin>>p>>t;
    a.resize(p.size());
    for(int i=0;i<p.size();++i)
    {
        cin>>a[i];
    }
//    for(auto e: a)cout<<e<<' ';
//    return;
    int l=0,r = p.size()-t.size()+1;
    int mid,ans=0;
    while(l<=r)
    {
        mid =(l+r)>>1;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
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
