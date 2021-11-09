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
    ll x,y,n,ans=0;
    cin>>x>>y>>n;
    ll a,b,c;
    a=n%x;
    if(a>=y) cout<<(n/x)*x+y;
    else cout<<(n/x)*x +y-x;
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





