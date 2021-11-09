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

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;
const int N = 4e6+6;
vector <int>a;
int n;

struct dept_gcd
{
    int st[N] ;
    void build(int id, int l, int r)
    {
        if( l== r)
        {
            st[id] = a[l];
            return ;
        }
        int mid = (l+r) >> 1;
        build(id<<1, l, mid);
        build(id<<1|1, mid+1, r);
        st[id] = __gcd(st[id<<1], st[id<<1|1]);

    }

    int get(int id, int l, int r, int u, int v)
    {
        if(v < l || r < u)
        {
            return 0;
        }
        if(u <= l && r <= v)
        {
            return st[id];
        }
        int mid = (l+r)>>1;
        return __gcd(get(id<<1, l, mid, u, v) , get(id<<1|1 , mid+1, r, u,v));
    }

    bool ok(int mid)
    {
        int res = get(1,0,(n<<1)-1,0,mid);
        fore(i,0,n)
        {
            if( get(1,0,(n<<1)-1, i, i+mid) != res )
                return 0;
        }
        return 1;
    }

} it;

// here

 void unstopable()
{
    a.resize(N);
    cin >> n;
    fore(i,0,n)
    {
        cin >> a[i];
        a[i+n] = a[i];
    }
    it.build(1,0,(n<<1)-1);

    int ans  = 0;
    int l =0,  r = n,mid;
    while(l <= r)
    {
        mid =(l+r)>> 1;
        if(it.ok( mid))
        {
            ans = mid;
            r = mid -1;
        }
        else 
            l = mid + 1;
    }
    cout << ans <<endl;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   int q;
    cin >> q;
    while (q--){
        
        unstopable();
    }
    return 0;
}

