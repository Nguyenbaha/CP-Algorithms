#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
    int tc; cin>>tc;
    while(tc--)
    {

ll n; cin>>n;
vector<ll> ans;
ll p=1;
while(n>0)
{
    if(n%10 > 0)
    {
        ans.push_back((n%10)*p);
    }
    n /= 10;
    p *= 10;
}
cout<<ans.size()<<endl;
for(auto e: ans) cout<<e<<' ';
cout<<endl;
}
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




