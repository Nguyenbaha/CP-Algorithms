#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int f[N]={0};
int g[N]={0};
void fb()
{
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=47;++i)
        f[i]=f[i-1]+f[i-2];
}
void bf()
{
      g[0]=1;
    g[1]=1;
    for(int i=2;i<=47;++i)
        g[i]=g[i-1]+g[i-2];
}
void Never_give_up()

{
    int n; cin>>n;
    fb();
    bf();
    int ans2=g[n-1];
    int ans1 = f[n-1];
    cout<<ans1<<' '<<ans2;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



