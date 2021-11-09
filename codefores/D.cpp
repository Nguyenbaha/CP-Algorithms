#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll x,y,n,t;
vector<ll> a;

void Never_give_up()

{
    cin>>n>>x>>y; --x;--y;
    ll s1=0,s2=0;
    if(x<=y)
    {


    for(ll i=0;i<n;++i)
    {
        cin>>t;
        a.push_back(t);
        s1+=t;
        if(i>=x && i<y) s2+=t;

    }
    s1-=s2;
    }
    else
    {
       for(ll i=0;i<n;++i)
    {
        cin>>t;
        a.push_back(t);
        s1+=t;
        if(i>=y && i<x) s2+=t;

    }
    s1-=s2;

    }
    cout<<min(s1,s2);
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


