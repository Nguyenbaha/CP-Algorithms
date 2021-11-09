#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
//😁😁😁😁😁😁😁😁😁😁😁

ll fibo(ll n)
{
    ll f[2][2]={{1,1},{1,0}};
    ll res[2][2] = {{1,1},{0,1}};
    ll tmp[2][3] = {{0,0},{0,0}};
    int i,j,k;
    while(n)
    {
        if(n&1)
        {
            memset(tmp,0,sizeof tmp);
            for(i=0;i<2;i++)for(j=0;j<2;j++)
                for(k=0;k<2;k++)
                tmp[i][j] = (tmp[i][j] + res[i][k]*f[k][j])%MOD;

            for(i=0;i<2;i++)
                for(j=0;j<2;j++)
                res[i][j] = tmp[i][j];
        }
        memset(tmp,0,sizeof tmp);
        for(i =0; i<2;i++)for(j=0;j<2;j++)
            for(k=0;k<2;k++)
            tmp[i][j] = (tmp[i][j] + f[i][k]*f[k][j])%MOD;

        for(i=0;i<2;i++)
            for(j=0;j<2;j++)
            f[i][j] = tmp[i][j];
        n/=2;
    }
    return res[0][1]%MOD;
}
void Never_give_up()

{
    ll n; cin>>n;
    cout<<fibo(n+1)<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


