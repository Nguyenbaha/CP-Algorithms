#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{

int n,m; cin>>n>>m;
int a[N];
for(int i=1;i<=n;++i)
{
    cin>>a[i];
}
sort(a+1,a+1+n,greater<int>());
int cnt=1; int ans=1;
for(int i=1;i<=n;++i)
if(cnt<m) {cnt+=a[i]-1; ans++; }
if(cnt<m) cout<<-1;
else cout<<ans-1;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}
