#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int a[N],flag[N];
void Never_give_up()

{
int n,m; cin>>n>>m;
for(int i=1;i<=n;++i)cin>>a[i];
for(int i=1;i<=n;++i)
    if(a[i] != a[i-1]) flag[i] = i;
    else flag[i] = flag[i-1];
while(m--)
{
    int l,r,x;
    cin>>l>>r>>x;
    if(a[r] != x) {cout<<r<<endl;}
    else if(a[l]!= x) {cout<<l<<endl;}
    else if(flag[r]>l) cout<<flag[r]-1<<endl;
    else cout<<-1<<endl;
}

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


