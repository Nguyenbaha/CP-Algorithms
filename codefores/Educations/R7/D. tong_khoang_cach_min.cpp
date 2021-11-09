#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 5e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int a[N],ans[N];
void Never_give_up()

{
int n; cin>>n;

for(int i=1;i<=n;i+=2)
{
    ans[(i+1)/2] = ans[n+1-(i+1)/2] = i;
}
for(int i=2;i<=n;i+=2)
{
    ans[n+i/2] = ans[2*n-i/2] = i;
}
for(int i=1;i<= 2*n;++i)
    if(ans[i]==0)   ans[i]=n;
for(int i=1;i<= n<<1;++i)
    cout<<ans[i]<< ' ';

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



