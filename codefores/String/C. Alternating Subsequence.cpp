#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const ll N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
int tc; cin>>tc;
while(tc--)
{
    ll n; cin>>n;
    ll a[N];
    for(int i=1;i<=n;++i)cin>>a[i];
    vector<ll> v;
    ll tmp=a[1];
    for(int i=2;i<=n;++i)
    {
        if(a[i]*a[i-1] < 0)
        {
            v.push_back(tmp);
            tmp = a[i];
        }
        else
            tmp = tmp>a[i]?tmp:a[i];
    }
    v.push_back(tmp);
    ll ans=0;
    for(auto e: v)ans+=e;
    cout<<ans<<endl;
}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





