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
#define int ll 
const int  N = 4e6+6;
int n,q;
vector <int> a(N);
// here
// Cây quản lý 0 đến n-1;
// get tu u->v
struct Sg_Sum
{
    
    int st[N];

    void build(int id, int l, int r)
    {
        if(l == r)
        {
            st[id] = a[l];
            return ;
        }
        int mid = (l+r)>>1;
        build(id<<1, l, mid);
        build(id<<1|1 , mid+1, r);
        st[id] = min(st[id<<1] , st[id<<1|1] );
    }
    void update(int id, int l, int r, int i, int val)
    {
        if(i < l || r< i)
            return ;
        if(l == r)
            {
                st[id] = val;
                return ;
            }
        int mid = (l+r)>>1;
        update(id<<1 , l, mid, i, val);
        update(id<<1|1, mid+1, r, i, val);
        st[id] = min (st[id<<1|1] , st[id<<1]);
    }

    int get(int id, int l, int r, int u, int v)
    {
        if(v< l || r < u)
            return INT_MAX;
        if(u <= l &&  r <= v)
            return st[id];
        int mid = (l+r)>>1;
        return min(get(id<<1 , l, mid, u, v) , get(id<<1|1 , mid+1, r, u, v));
    }
} it;
 void unstopable()
{
    cin >> n >> q;
    fore(i,0,n)
        cin >> a[i];
    it.build(1,0,n-1);
    while(q--)
    {
        int t;
        cin >> t;
        if(t == 1)
        {
            int i,val;
            cin >>i >> val;
            
            it.update(1,0,n-1,i,val);
        }
        else
        {
            int u,v;
            cin >> u >> v;
             v--;
            cout<<it.get(1,0,n-1,u,v)<<endl;
        }
    }
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
}

