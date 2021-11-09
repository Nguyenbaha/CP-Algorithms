#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here
 int n,m;
 vector<int> a;
 int f[N];
 int bs(int k)
{
    int l=0,r=n-1;
    int mid;
    int ans;
    while(l<=r)
    {
        mid =(l+r)>>1;
        if(k <= f[mid])
        {
            ans = mid;
            r = mid -1;
        }
        else l= mid +1;
    }
    return ans+1;
}
void sol()
{
    cin>>n;
    for(int i=0;i<n;++i)
    {
        int t;
        cin>>t;
        a.push_back(t);
    }
    f[0] = a[0];
    for(int i=1;i<a.size();++i)
        f[i] =  f[i-1] + a[i];
    cin>>m;
    for(int i=0;i<m;++i)
    {
        int t;
        cin>>t;
        cout<<bs(t)<<endl;
    }
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
