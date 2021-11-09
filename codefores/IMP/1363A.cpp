#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T;

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
   int n,k;
   cin>>n>>k;
   int a[n];
   int le =0,ch=0;
   for(int i=0;i<n;++i)
   {
       cin>>a[i];
       if(a[i]&1)
        le++;
       else
        ch++;
   }
   if(!le)
   {
       cout<<"No"<<endl;
       return;
   }
   if(k < n)
   {
       if(le && ch)
       {
           cout<<"Yes"<<endl;
       }
       else if(le && k&1)
       {

           cout<<"Yes"<<endl;
       }
       else cout<<"No"<<endl;
   }
   else
   {
       if(le&1)
        cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
   }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    sol();
 }


}

