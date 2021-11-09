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
   int a[N];
   int i,cnt=1,pos=0;
   for(i=0;i<n;++i)
    cin>>a[i];
   for(i=1;i<n;++i)
    if(a[i] < a[i-1])
        cnt++;
   else
   {
       if(cnt>1) break;
       pos = i;
       cnt = 1;
   }
   reverse(a+pos,a+pos+cnt);
   for(i =1 ; i<n;++i)
    if(a[i] <a[i-1])
   {
       cout<<"no";
       return;
   }
   cout<<"yes"<<endl<<pos+1<<' '<<pos+cnt;
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
