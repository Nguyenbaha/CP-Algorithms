#include <bits/stdc++.h>
using namespace std;
#define int long long
#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define ALL(s) s.begin(),s.end()
 const int mod= 1e9+7;
 
int fpow(int a, int n){
    if (n==0) return 1;
    if (n%2==1) return (a*fpow(a*a%mod,n/2))%mod;
    else return fpow(a*a%mod,n/2);
}
typedef unsigned long long ull;
int T=1;


// Here

bool ok(int n)
{
    if(n < 1) return 0;
    for(int i=2; i*i <= n; ++i)
        if(n % i == 0)
            return 0;

    return 1;
}
void unstoppable()
{
   int a,b;
   cin >> a>> b;
   if(!ok(a) || !ok(b))
   {
    cout << "NO";
    return;
   }
   for(int i=a+1; i < 100; ++i)
   {
    if(ok(i))
    {
        if(i == b)
        {
            cout << "YES";
            return;
        }
        else{
            cout <<"NO";
            return;
            
        }
    }
   }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(T--)
{
    unstoppable();
 }


}