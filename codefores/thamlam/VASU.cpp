#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
int n; cin>>n;
int a[N];
for(int i=1;i<=n;++i)cin>>a[i];
sort(a+1,a+n+1);
int cnt=0,ans=0;
for(int i=n;i>=1;--i)
    if(a[i]-cnt >0)
{
    ans += a[i]-cnt;
     cnt++;
}
cout<<ans;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





