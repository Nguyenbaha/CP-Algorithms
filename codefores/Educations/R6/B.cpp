#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int cnt[]={6,2,5,5,4,5,6,3,7,6};
int cal(int x)
{
    int res =0;
    while(x)
    {
        res+=cnt[x%10];
        x/=10;
    }
    return res;
}
void Never_give_up()

{


ll a,b,ans=0; cin>>a>>b;
for(int i=a;i<=b;++i)
{
    ans += cal(i);
}
cout<<ans;
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



