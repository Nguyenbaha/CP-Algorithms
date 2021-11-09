#include <bits/stdc++.h>
using namespace std;
 #define ll long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T;
// Here
bool ok( )
{

}
//here
int a[105],d[105];
int n;
void build(int l, int r, int depth)
{
    int pos = l;
    for(int i=l;i<=r;++i)
        if(a[i] > a[pos])
            pos = i;
    d[pos] = depth;
    if(pos - 1 >= l)
        build(l,pos-1,depth+1);
    if(pos + 1 <= r)
        build(pos+1, r, depth+ 1);
}
void sol()
{
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    build(1,n,0);
    for(int i=1;i<=n;++i)
        cout<<d[i]<<' ';
    cout<<endl;
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
