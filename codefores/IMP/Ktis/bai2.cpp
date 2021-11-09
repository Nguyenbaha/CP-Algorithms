#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    vector<pii> v;
    double n; cin>>n;
    for(int i=0;i<n;++i)
    {
        double x,y; cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    double f = ((abs(v[0].first)+abs(v[n-1].first))/2 +1);
    double ans = (double)(f/v[0].second);
    ans = max(ans,(f/v[n-1].second));
    cout<<fixed<<setprecision(6)<<f;
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


