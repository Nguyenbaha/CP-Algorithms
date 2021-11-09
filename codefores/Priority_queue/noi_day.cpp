#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll mod = 1e9+7;
void Never_give_up()

{
int n; ll val;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>val;
        pq.push(val);
    }
    ll res=0;
    while(pq.size()>1)
    {
        ll x = pq.top(); pq.pop();
          ll y = pq.top(); pq.pop();
        ll tmp = (x+y)%mod;
        res+=tmp; res%=mod;
        pq.push(tmp);
    }
    cout<<res<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;;

for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



