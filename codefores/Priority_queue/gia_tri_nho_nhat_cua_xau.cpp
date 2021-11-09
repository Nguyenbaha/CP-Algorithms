#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll ans=0,k; string s;
    ll cnt[300]={0};
    cin>>k>>s;
    priority_queue<ll,vector<ll>> pq;

    for(int i=0;i<s.size();++i)
        cnt[s[i]]++;
    for(int i=0;i<300;++i)
        if(cnt[i]>0)
            pq.push(cnt[i]);
    while(pq.size()>0 && k>0)
    {
        ll tmp = pq.top();
        tmp--;
        k--;
        pq.pop();
        pq.push(tmp);
    }
    while(pq.size()>0)
    {
        ans += pq.top() * pq.top();
        pq.pop();
    }
    cout<<ans<<endl;
};

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


