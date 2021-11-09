
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

/*

─────────▄──────────────▄
────────▌▒█───────────▄▀▒▌
────────▌▒▒▀▄───────▄▀▒▒▒▐
───────▐▄▀▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐
─────▄▄▀▒▒▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐
───▄▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀██▀▒▌
──▐▒▒▒▄▄▄▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄▒▒▌
──▌▒▒▐▄█▀▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐
─▐▒▒▒▒▒▒▒▒▒▒▒▌██▀▒▒▒▒▒▒▒▒▀▄▌
─▌▒▀▄██▄▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▌
─▌▀▐▄█▄█▌▄▒▀▒▒▒▒▒▒░░░░░░▒▒▒▐
▐▒▀▐▀▐▀▒▒▄▄▒▄▒▒▒▒▒░░░░░░▒▒▒▒▌
▐▒▒▒▀▀▄▄▒▒▒▄▒▒▒▒▒▒░░░░░░▒▒▒▐
─▌▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒▒▒░░░░▒▒▒▒▌
─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐
──▀▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▌
────▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀
───▐▀▒▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀
──▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▀

*/
// Here
bool ok( )
{

}
//here
vector<int> st, a;
int n;
void build(int id, int l, int r)
{
    if(l == r)
        st[id] = a[l];
    else{
        int mid  = (l+r) / 2;
        build(id*2,l,mid);
        build(id*2+1, mid+1, r);
        st[id] = st[id*2]+st[id*2+1];
    }
}
// update: cập nhật trên cây ST, gốc id quản lý đoạn [l,r] với truy vấn a[pos]=v;
void update(int id, int l, int r, int pos, int v)
{
//    if(pos <l || pos > r)
//        return ;
    if(l == r)
       {
            st[id] = v;
            a[l] = v;
       }
    else
    {
        int mid  = (l+r)/2;
    if(pos <= mid )
        update(id*2, l, mid, pos, v);
    else
        update(id*2+1, mid+1, r, pos, v);
    st[id] = st[id*2] + st[id*2+1];
    }
}
int getSum(int id, int l, int r, int ql, int qr)
{
    if(l > qr || r < ql)
        return 0;
    if(ql<=l && r<=qr) // ql <= l && r <= qr
        return st[id];
    int mid  = (l+r)/2;
    return getSum(id*2, l, mid,ql,qr) + getSum(id*2+1,mid+1,r, ql,qr);
}
void never_give_up()
{
    cin >> n;
    a.resize(n);
    st.assign(4*n+4,0);
    for(int i=0;i <n; ++i)
        cin >> a[i];
    build(1,0,n-1);
    update(1,0,n,0,8);
    int x = getSum(1,0,n,1,4);
    cout <<"SUM from 1 to 4: .."<<x<<endl;
    cout <<"SUM from 0 to 2: .."<<getSum(1,0,n,0,2)<<endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(T--)
{
    never_give_up();
 }


}
