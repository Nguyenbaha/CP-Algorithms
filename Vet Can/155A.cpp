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
int T;


// Here


void unstoppable()
{
   int n;
   cin >>  n;
   vector <int> a(n);
   for(auto &i: a)
    cin >> i;
    int mx=a[0], mn= a[0], cnt=0;
    for(int i=1;i < n; ++i )
    {
        if(a[i] > mx)
        {
            cnt ++;
            mx = a[i];
        }
        if(a[i] < mn)
        {
            cnt ++;
            mn = a[i];
        }
    }
    cout << cnt;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

     T =1;
    while(T--)
{
    unstoppable();
 }


}

