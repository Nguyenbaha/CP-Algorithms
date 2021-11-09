#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fr(i,a,b) for(ll i=a; i<b; i++)
#define rf(i,a,b) for(ll i=a; i>=b; i--)
typedef std::vector<long long > vi ;
#define F first
#define S second
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(),a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define endl '\n'
#define show(a) for(auto el:a)cout<<el<<" "
const ll INF=LLONG_MAX/2;
const ll N=2e5+1;
#define yesno(f) yes(f);no(f);
#define yes(f) if(f)cout<<"YES\n";
#define no(f) if(!f)cout<<"NO\n";
using  namespace std;
ll pow1(ll n,ll p)
{
	if(p==0)	return 1;
	ll x=pow1(n, p/2);
	x=(x*x)%mod;
	if(p%2==0)
		return x;
	else
		return (x*n)%mod;
}
ll n,mat[2][2];
void matpow(ll p)
{
    if(p==0) return ;
    ll temp[2][2],ans[2][2],x=0,res[2][2];
    fr(i,0,2)
    {fr(j,0,2)
    {temp[i][j]=mat[i][j];
    }}
    res[0][0]=1;res[1][1]=1;res[1][0]=0;res[0][1]=0;
    while(p>0)
    {
        if(p%2==1)
        {
            ans[0][0]=(res[0][1]*temp[1][0]+res[0][0]*temp[0][0])%mod;
            ans[0][1]=(res[0][1]*temp[1][1]+res[0][0]*temp[0][1])%mod;
            ans[1][0]=(res[1][0]*temp[0][0]+res[1][1]*temp[1][0])%mod;
            ans[1][1]=(res[1][0]*temp[0][1]+res[1][1]*temp[1][1])%mod;
            fr(i,0,2)
            {
                fr(j,0,2)
               {
                   res[i][j]=ans[i][j];
               }
            }

        }
        ans[0][0]=(temp[0][1]*temp[1][0]+temp[0][0]*temp[0][0])%mod;
        ans[0][1]=(temp[0][1]*temp[1][1]+temp[0][0]*temp[0][1])%mod;
        ans[1][0]=(temp[1][0]*temp[0][0]+temp[1][1]*temp[1][0])%mod;
        ans[1][1]=(temp[1][0]*temp[0][1]+temp[1][1]*temp[1][1])%mod;
        fr(i,0,2)
        {
            fr(j,0,2)
            {
                temp[i][j]=ans[i][j];

            }
        }
        p/=2;
    }
    fr(i,0,2)
            {
                fr(j,0,2)
               {
                   mat[i][j]=res[i][j];

               }
            }
}
ll fib(ll x)
{

    mat[0][0]=1;
    mat[0][1]=1;
    mat[1][0]=1;
    mat[1][1]=0;
    matpow(x-1);
    return ((2*mat[0][0]+mat[0][1])%mod);
}
int main()
{
    fast;
   ll t;
   std::cin >> t;
   while(t--)
   {
       std::cin >> n;
       if(n==1)
       {
           cout<<"2\n";
           continue;
       }
       cout<<fib(n)<<"\n";
   }
}
