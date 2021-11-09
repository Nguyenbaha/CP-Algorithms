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
    ll n; cin>>n; ll cnt2=0,cnt3=0;
    while(n%2==0)
    {
        cnt2++; n/=2;
    }
    while(n%3==0)
    {
        cnt3++; n/=3;
    }
    if(cnt2>cnt3 || n!=1)puts("-1");
    else cout<<2*cnt3-cnt2<<endl;
}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





