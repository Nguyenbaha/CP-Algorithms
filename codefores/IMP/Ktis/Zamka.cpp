#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁


 bool pw(ll n,ll r)
 {
     ll  s=0;
     while(n>0)
     {
         s +=  n%10;
         n/=10;
     }
     if(s==r) return true;
     else return false;
 }
void Never_give_up()

{
    ll l,d,x;
    cin>>l>>d>>x;
    ll ans=0;
    for(int i=l;i<=d;++i)
    {
        if(pw(i,x))
        {
            ans=i; break;
        }
    }
    ll res=0;
    for(int i=d;i>=l;--i)
    {
        if(pw(i,x))
        {
            res=i; break;
        }
    }
    cout<<ans<<endl;
    cout<<res;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



