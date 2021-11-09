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
    int ans=0;
    while(true)
    {
        if(n%6==0)
        {
            ans++; n/=6;
        }
        else if(n%3==0){n*=2;ans++;}
        else break;
    }
    if(n==1) cout<<ans<<endl;
    else puts("-1");
}
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




