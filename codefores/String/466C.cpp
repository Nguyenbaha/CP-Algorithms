#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
ll n; cin>>n;
ll a[n],s[n];
s[0]=0;
for(int i=0;i<n;++i)
{
    cin>>a[i];
    s[i+1] = s[i] + a[i];
}
ll cnt=0,ans=0;
if(s[n]%3==0)
{
    ll u = s[n]/3; ll v = 2*s[n]/3;
    for(int i=1;i<n;++i)
       {

         if(s[i]==v) ans+=cnt;
         if(s[i]==u) cnt++;}
}
cout<<ans;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





