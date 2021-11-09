#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 1e6+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int pr[N];
vector<ll> ispr;
void snt()
{
    pr[0]=pr[1]=1;
    for(int i=2;i*i<=N;++i)
    {
        if(!pr[i])
            for(int j=i*i;j<N;j+=i)
                pr[j]=1;
    }

    for(int i=2;i<=N;++i)
        if(!pr[i]) ispr.push_back(i);

}
bool bs(ll k)
{
    ll l=0,r=ispr.size(),mid;
    while(l<=r)
    {
        mid=(l+r)>>1;
        ll ok = ispr[mid]*ispr[mid];
        if(ok == k) return true;
        else if(ok > k) r = mid -1;
        else l = mid + 1;
    }
    return false;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
snt();
int tc; cin>>tc;
while(tc--)
{
ll n; cin>>n;
if(bs(n)) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
return 0;
}




