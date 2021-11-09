#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n,c; cin>>n>>c;

    int mx=INT_MIN;
    int a[n+1];
    for(int i=1;i<=n;++i)
        cin>>a[i];
    for(int i=1;i<=n;++i)
    {
        int eattmp=0;
        int cnt=0;
        for(int j=i;j<=n;++j)
        {
            int w=a[j];
            if(eattmp + w <= c)
            {
                eattmp += a[j];
                cnt++;
            }
        }
        if(cnt>mx)
            mx = cnt;
    }
    cout<<mx;
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


