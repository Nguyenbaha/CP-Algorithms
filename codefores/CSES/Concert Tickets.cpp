#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

    multiset<ll,greater<ll>> ms;

void Never_give_up()

{
    ll n,m; cin>>n>>m;
    while(n--)
    {
        ll t; cin>>t;
        ms.insert(t);
    }
//    5 3
//5 3 7 8 5
//4 8 3
 // 8 7 5 5 3
 //3 5 5 7 8
 //7 5 5
    while(m--)
    {
        ll val;
        cin>>val;
        auto res = ms.lower_bound(val);
        if(res==ms.end())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<*res<<endl;
            ms.erase(res);
        }
    }
//for(auto e: ms) cout<<e<<' ';
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


