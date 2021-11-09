#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
ll n; cin>>n;
int ar[500000],i,j,m=1;
ll r=0,q;
ar[0]=1;
for(i=2;i<=n;++i)
{
    for(j=0;j<m;++j)
        {
            q=r;
            r = (ar[j]*i + r)/10;
            ar[j] = (ar[j]*i+q)%10;
        }
    while(r>0)
    {
        ar[m] = r%10;
        m++;
        r/=10;
    }
}
    for(i = m-1;i>=0;--i)cout<<ar[i];
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





