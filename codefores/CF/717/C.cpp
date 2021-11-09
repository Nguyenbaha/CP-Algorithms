#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T=1;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
//here

void sol()
{
   int n;
   cin>>n;
   int s=0;
   vector<int> a(n);
   for(int &i: a)
    cin>>i,s+=i;
   if(s%2!=0 )
   {
       cout<<0;
       return;
   }
   int g=a[0];
   for(int i=1;i<n;++i)
    g=__gcd(g,a[i]);
    if(g!=1)
    {
   for(int i=0;i<n;++i)
    a[i]/=g;
   for(int i=0;i<n;++i)
    if(a[i]&1)
   {
       cout<<1<<endl<<i+1;
       return;
   }
   cout<<0;
    }
    else
    {
        for(int i=0;i<n;++i)
        {
            while(a[i]%2==0)
                a[i]/=2;
        }

        for(int i=0;i<n;++i)
            if(a[i]&1)
            {
                cout<<1<<endl<<i+1;
                return;
            }
        cout<<0;
    }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //cin >> T;
    while(T--)
{
    sol();
 }


}
