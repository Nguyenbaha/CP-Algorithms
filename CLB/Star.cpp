
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here
ll n;
ll  solrow(ll row)
{
    ll col = n/row;
    ll rem = n%row;
    if((row&1)==0)
    {
        if(rem!= 0 && rem != row/2) return INT_MAX;
        if(rem != 0 && rem!=row/2 && rem!=row/2+1) return INT_MAX;
        if(rem!=0) col++; return abs(col-row);

    }
}
 ll solc2(ll col)
 {
     ll row = n/(2*col+1);
     ll rem = n%(2*col+1);
     if(rem==0) return(abs(col+1-2*row));
     if(rem != col && rem != col+1) return INT_MAX;
     return abs(col-2*row);
 }
 ll solcol(ll col)
 {
     ll row = n/col;
     ll rem  = n%col;
     if(rem==0) return abs(col-row);
     if((row&1)) if(rem != row/2 && rem != (row+1)/2) return INT_MAX;
                else return abs(col+1-row);
    if(rem != col/2) return INT_MAX;
                else return  abs(col+1-row);
 }
void sol()
{
    cin>>n;
ll    ans = INT_MAX;
    for(ll i=1;i*i<=n;++i)
    {
        ans=min(ans,solrow(i));
    }
    for(ll i=1;i*i<=n;++i)
    {
        ans=min(ans,solcol(i));
        ans = min(ans,solc2(i));
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
