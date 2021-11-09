#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

int n;
void Never_give_up()

{
cin>>n;
int a[n];
for(int i=1;i<=n;++i)cin>>a[i];
int cnt=1,maxx=INT_MIN;
for(int i=2;i<=n;++i)
{
    if(a[i]>=a[i-1]) cnt++;
    else cnt=1;
    maxx = max(cnt,maxx);
}
cout<<maxx;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

Never_give_up();


 return 0;
}



