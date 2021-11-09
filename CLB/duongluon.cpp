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
vector<int> a;
int n;
vector<pair<int,int>> vp; // luu vi tri dau va trong so cua no;
void unstoppable()
{
   cin >> n;
   a.resize(n);
   for(auto &i : a)
    cin >> i;
    int ok1=0;// day tang
    for(int i=1;i < n; ++i)
        if(a[i] < a[i-1])
        {
            ok1 = 1;
            break;
        }
    if(!ok1)
    {
        cout << 0;
        return;
    }
    int ok2 = 0;
    for(int i=1; i < n; ++i)
        if(a[i] > a[i-1])
        {
            ok2 = 1;
            break;
        }
    if(!ok2)
    {
        cout << 0;
        return ;
    }
    //
    for(int i=1; i< n-1; ++i)
    {
        int j = i+1;
        bool ok =0;
        while((a[i] > a[i-1] )&& (a[i] <a[j]))
        {
            ok = true;
            j++;
        } 
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   // cin >> T;
    while(T--)
{
    unstoppable();
 }


}
