#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ull ha(int a, int n)
{
    if(n == 1) {
        return a;
    } else {
        int temp = pow(a, n/2);
        if(n % 2 == 0)
            return temp * temp;
        else
            return temp * temp * a;
    }
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
ll ans=0;
ll n; cin>>n;
if(n==1)
{
    cout<<1<<endl;
    cout<<0<<endl;
    cout<<1<<' '<<1<<endl; return 0;
}


for(int i=1;i<=39;++i)
{
    if(ha(3,i)==n)
    {
        cout<<n<<endl;
        cout<<0<<endl;
        cout<<1<<' '<<n; return 0;
    }
    else if(ha(3,i)>n)
        { ans = ha(3,i); break;}

}
cout<<ans<<endl;
ll cnt1=0,cnt=1; ll r = ans-n; ll x=0; ll s=0;
for(int i=1;i<=39;++i)
{
    s+=ha(3,i);
    if(s>=r) {x=i;break;}
}
vector<ll> v;
for(int i=1;i<=x;++i)
{ll a=ha(3,i);
if(a>n) break;
else v.push_back(a);}
cout<<v.size()<<' ';
for(auto e: v) cout<<e<<' ';
cout<<endl;
cout<<1<<' '<<ans;

return 0;
}




