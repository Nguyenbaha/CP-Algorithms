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
    cin >> n;
    if( n <= 30)
    {
        cout <<"NO"<<endl;
        return;
    }

    cout << "YES"<<endl;
    int a = 6, b = 10, c= 14;
    int d = n - a - b - c;
   if(d == a)
    {
        d--;
        c++;
    }
    else
        if(d == b)
        {
            d--;
            c++;
        }
        else if(d == c)
        {
            c++;
            d--;
        }
cout <<a<<" "<<b<<' '<<c<<' '<<d<<endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    unstoppable();
 }


}

