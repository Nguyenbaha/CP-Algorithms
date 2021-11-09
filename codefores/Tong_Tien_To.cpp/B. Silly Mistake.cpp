#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 1e2+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll a[100005],f[100005];
void ha()
{
ll n; cin>>n;
for(int i=1;i<=n;++i)
{
    cin>>a[i];
    f[i] = f[i-1] + a[i];
}
ll cnt = 0, pos = 1;
vector<int> ans;
map<ll,ll> mp;
for(int i=1;i<=n;++i)
{
    if(a[i]>0)
    {
        if(mp[a[i]]==0 && mp[-a[i]]==0) mp[a[i]]=1;
        else { cout<<-1;goto END;}
    }else {
        if(mp[abs(a[i])] == 0){cout<<-1; goto END;}
        else mp[a[i]]=1;
    }
    if(f[i] - f[pos-1] == 0)
    {
        cnt++;
        ans.push_back( i - pos + 1);
        pos = i+1;
        //ans.push_back( i - pos + 1);
        mp.clear();
    }
}
    if(f[n] - f[pos-1] !=0 ) {cout<<-1; goto END;}
    cout<<cnt<<endl;
    for(auto e: ans) cout<<e<<' ';
    END: ;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




