#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
bool ck(ll x)
{
    if(x==0||x==1) return true;
    ll t=x/2;
    ll r=x%2;
    if(r==1) return false;
    return ck(t);
}
void ha()
{

ll n; cin>>n;
if(n==1){ cout<<0<<' '<<1;exit(0);}
if(n==4294967296){cout<<4294967296/2<<' '<<4294967296/2;exit(0);}
   for(int i=1;i<=32;++i)
   {
       ll a=2<<i;
       ll tmp=n-a;
       if(ck(tmp)==true)
       {
           if(i==1)cout<<n/2<<' '<<n/2;
           else
           cout<<a<<' '<<tmp;
            break;
       }
   }

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




