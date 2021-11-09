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
   char a[51][51];
   int n,m;
   cin >>  n >> m;
   bool c1=0;
   for(int i=0; i< n; ++i)
    for(int j=0; j < m; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] == '.')
                c1 = true;
        }
    if( c1 )
    {
        for(int i=0; i < n; ++i)
            {
                for(int j=0; j < m ; j++)
                {
                    if( a[i][j] == a[i][j+1])
                    {
                        cout <<"NO"<<endl;
                        return;
                    }
                    if( a[i][j] == a[i-1][j])
                    {
                        cout <<"NO"<<endl;
                        return;
                    }
                }
            }
            cout<<"YES\n";
        for(int i=0; i < n; ++i)
        {
            for(int j=0;j <m; ++j)
                cout<<a[i][j];
            cout<<endl;
        }
            
    }
    // process
    else 
    {
        cout<<"casen";
    }
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
