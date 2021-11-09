// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
 #define prec(n) fixed<<setprecision(n)
typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
// __gcd(n,0) = n;

// here
const int N =(1<<17) + 6;
int st[4*N] , a[N];
void build(int id, int l, int r, bool x)
{
    if(l == r)
    {
        st[id] = a[l];
        return ;
    }
    int mid = (l+r)/2;
    build(id<<1, l ,mid, !x) ;
    build(id<<1|1, mid+1, r, !x);
    if(x)
        st[id] = st[id<<1]^st[id<<1|1];
    else 
        st[id] = st[id<<1]|st[id<<1|1];
}
void update(int id, int l, int r, int val, bool x)
{
    if(l == r)
    {
        st[id] = a[val];
        return ;
    }
    int mid =(l+r)>>1;
    if(val <= mid)
        update(id<<1, l, mid, val, !x);
    else
        update(id<<1|1, mid+1,r, val, !x);
    if(x)
        st[id] = st[id<<1]^st[id<<1|1];
    else
        st[id] = st[id<<1]|st[id<<1|1];
} 
 void unstopable()

{
	int n,q;
    cin >> n >> q;
    fore(i,0,(1<<n))
        cin >> a[i];
    bool x = (n%2==0);
    build(1,0,(1<<n)-1, x);
    while(q--)
    {
        int i, val;
        cin >> i >> val;
        a[i-1] = val;
        update(1,0,(1<<n)-1, i-1, x);
        cout<<st[1]<<endl;
    }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
  
        
        unstopable();
   
}
