#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
int n,x; cin>>n>>x;
int ans=0,cur=1;
for(int i=1;i<=n;++i)
{
    int r,l; cin>>l>>r;
    int tmp = (l-cur)%x;
    tmp += (r-l+1);
    ans+=tmp;
    cur = r +1;
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





