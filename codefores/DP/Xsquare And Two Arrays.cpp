#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll a[N],b[N];
int n,q;
ll ans = 0;
int l,r;
void Never_give_up()

{
    cin>>n>>q;
    for(int i=1;i<=n;++i)cin>>a[i];
    for(int i=1;i<=n;++i)cin>>b[i];
    while(q--)
    {
        int x; cin>>x>>l>>r;
        int j=2;
        if(x==1)
        {
            for(int i=l;i<=r;++i)
            {
                if(j&1)
                {
                    ans += b[i] ; ++j;
                }
                else
                {
                    ans += a[i] ;  ++j;
                }
            }
        }
        else
        {
            for(int i=l;i<=r;++i)
            {
                if(j&1)
                {
                    ans += a[i]; ++j;
                }
                else
                {
                    ans += b[i]; ++j;
                }
            }
        }
        cout<<ans<<endl; ans=0;
    }

}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);


Never_give_up();


 return 0;
}



