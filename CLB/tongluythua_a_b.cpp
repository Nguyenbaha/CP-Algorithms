#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define uli unsigned long int
int main(){
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ll ha; cin>>ha;
ll a = __builtin_popcount(ha);
if(a==1)
{
    ll s = 1<<a;s++; ll h = 1<<s;
    cout<<h<<" "<<h;
}
else
{
    ll s = ha/2-1;
    ll e = 1<<s; e++;
    e = e>>1;
        cout<<2<<" "<<e;
}
return 0;
}




