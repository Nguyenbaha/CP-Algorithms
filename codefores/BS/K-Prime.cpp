#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 1e6+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here
vector<ll> isPr;
ll v[N];
 void snt()
 {

     for(ll i = 2;i*i < N;++i)
     {
         if(!v[i])
         {
             for(ll j=i*i ; j < N; j+=i)
                v[j]=1;
         }
     }
        for( ll i=2;i<N;++i)
            if(!v[i])
            isPr.push_back(i);
 }
 bool b_s(ll k)
 {
     ll l=0,r = isPr.size();
        ll mid;
        while(l<=r)
        {
            mid = (l+r)/2;
            if(isPr[mid]*isPr[mid] < k ) l= mid+1;
            else if(isPr[mid]*isPr[mid]  == k) return true;
            else r = mid -1;
        }
        return false;
 }
void sol()
{
    int n;
    cin>>n;
    snt();
    while(n--)
    {
        ll tmp;
        cin>>tmp;
        if(b_s(tmp))
            cout<<"YES";
        else cout<<"NO";
        cout<<endl;
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
