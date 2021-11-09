#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

ll ans[N]={0};

ll nhiphan(int n)
{
    vector<int> a;
    while(n)
    {
        a.push_back(n%2);
        n>>=1;
    }
    ll res = 0;
    for(int i=a.size()-1;i>=0;--i)
        res = res * 10 + a[i];
    return res;
}
void Never_give_up(int n)

{
    ans [0] = 0;
    ans [1] = 1;
    for(int i=2;i<=n;++i)
        ans[i] = nhiphan(i);
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);
 Never_give_up(N);
int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
        int n; cin>>n;
        for(int i=1;i<=n;++i) cout<<ans[i]<<' ';
        cout<<endl;
 }

 return 0;
}


