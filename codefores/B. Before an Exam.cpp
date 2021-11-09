#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
ll dp[105][2];
ll ans[105];
void ha()
{
ll d,s; cin>>d>>s;
ll s1,s2; s1=s2=0;

for(ll i=1;i<=d;++i)
{cin>>dp[i][0]>>dp[i][1];
s1+=dp[i][0];
 s2+=dp[i][1];
}
if(s1>s | s2<s) {cout<<"NO";}

else
{for(ll i=1;i<=d;++i) ans[i] = dp[i][0];
s-=s1;
for(ll i=1;i<=d;++i)
{
    ll temp=min(s,dp[i][1]-dp[i][0]);
    ans[i]+=temp;
    s-=temp;
}
cout<<"YES"<<endl;
for(ll i=1;i<=d;++i)cout<<ans[i]<<" ";

}
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




