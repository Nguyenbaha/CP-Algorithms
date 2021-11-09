#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+6;
typedef pair <int,int> pii;
#define se second // map[fi]++
#define fi first // value

int n,q;
vector <int> a;

struct Sg_Number_of_Minimums
{

   pii st[4*N];

void build (int id, int l, int r)
   {
    if(l == r)
    {
        st[id] = {a[l],1};
        return ;
    }

    int mid =(l+r) >> 1;
    build(id<<1, l, mid);
    build(id<<1|1, mid+1, r);

    if(st[id<<1].fi <  st[id<<1|1].fi)
    {
        st[id] = st[id<<1];
    }
    else if(st[id<<1].fi > st[id<<1|1].fi)
        {
            st[id] = st[id<<1|1];
        }
    else
        {
            st[id] = {st[id<<1].fi , st[id<<1].se + st[id<<1|1].se};
        }
   }

 void update(int id, int l, int r, int i, int val)
   {
    if(i <l  ||  r < i)
    {
        return ;
    }
    if( i <= l && r <= i)
    {
        st[id] = {val,1};
        return ;
    }
    int mid = (l+r) >> 1;
    update(id<<1, l, mid, i , val);
    update(id<<1|1, mid+1, r, i, val);
    if(st[id<<1].fi < st[id<<1|1].fi)
    {
        st[id] = st[id<<1];
    }
    else if(st[id<<1].fi > st[id<<1|1].fi)
    {
        st[id] = st[id<<1|1];
    } 
    else
    {
        st[id] = {st[id<<1].fi , st[id<<1].se + st[id<<1|1].se};
    }
   }
 pii getMin(int id, int l, int r, int u, int v)
{
    if(v < l || r < u)
    {
        return { INT_MAX, 1};
    }
    if(u <= l && r <= v)
    {
        return st[id];
    }

    int mid = (l+r)>>1;
    pii res1 = getMin(id<<1, l, mid, u, v);
    pii res2 = getMin(id<<1|1, mid+1, r, u, v);
    if(res1.fi < res2.fi )
    {
        return res1;
    }
    else if(res1.fi > res2.fi)
    {
        return res2;
    }
    else
    {
        return { res1.fi, res1.se + res2.se};
    }
    // het
}


} it;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
     cin >> n >> q;
    a.resize(N);
    for(int i=1; i <= n; ++i)
        cin >> a[i] ;
    it.build(1,1,n) ;
    while(q--)
    {
        int type;
        cin >> type;
        if(type == 1)
        {
            int i,val;
            cin >> i >> val;
            i++;
            it.update(1,1,n,i,val);
        }
        else
        {
            int u,v;
            cin >> u >> v;
            u++;

            pii ans = it.getMin(1,1,n,u,v);
            cout <<ans.fi << ' '<<ans.se <<endl;
        }
    }
    
}