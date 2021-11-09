#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
int tc; cin>>tc;
while(tc--)
{
    ll x,y,a,b;
    cin>>x>>y>>a>>b;
    ll s1=y-x;
    ll s2=a+b;
    if(s1%s2==0) cout<<s1/s2<<endl;
    else cout<<-1<<endl;
}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





