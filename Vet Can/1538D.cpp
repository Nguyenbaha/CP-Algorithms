#include <bits/stdc++.h>
using namespace std;

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

int fact(int n)
{
    vector <int> a;
    for(int i=2; i*i <=  n; ++i)
    {
        while(n % i == 0)
        {
            a.push_back(i);
            n /= i;
        }
    }
    if(n != 1)
    {
        a.push_back(n);
    }
    return a.size();
}
void unstoppable()
{
  int a,b,k ;
  cin >> a>> b>> k;
  if(a > b)
    swap(a,b);
 if(k==1)
 {
    if(a==b || b%a!=0)
    {
        cout << "NO"<<endl;return;
    }
    else
    {
        cout <<"YES"<<endl;return;
    }
 }
  int res = fact(a) + fact(b);
  if( k <= res)
  {
    cout << "YES";
  }
  else
    cout <<"NO";
cout <<endl;
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
