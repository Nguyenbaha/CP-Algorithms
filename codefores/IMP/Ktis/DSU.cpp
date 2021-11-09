#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<int> parent;
vector<int> sz;
int n,q;
char c;

int find(int e)
{
    while(parent[e]!=e)
    {
        parent[e] = parent[parent[e]];
        e = parent[e];
    }
    return e;
}
void union_set(int a,int b)
{
    int roota = find(a);
    int rootb = find(b);
    if(roota != rootb)
    {
        if(sz[roota] < sz[rootb])
        {
            swap(roota,rootb);
        }
        parent[rootb] = roota;
        sz[roota] += sz[rootb];
    }
}
void Never_give_up()

{
    cin>>n>>q;
    for(int i=0;i<n;++i)
    {
        parent.push_back(i);
        sz.push_back(1);
    }
    while(q--)
    {
        cin>> c;
        if(c=='t')
        {
            int x,y;
            cin>>x>>y;
            union_set(x-1,y-1);
        }
        else
        {
            int x;
            cin>>x;
            int root = find(x-1);
            cout<<sz[root]<<endl;
        }
    }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



