//#include <iostream>
//#include <vector>
//#include <climits>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(false); cin.tie(0);
//
//    int n, m; cin >> n >> m;
//    vector<int> a(n);
//    for (int &x: a) {
//        cin >> x;
//        x %= m;
//    }
//
//    vector<int> f(m, INT_MIN), g(m);
//    f[0] = 0;
//    for (int x: a) {
//        for (int i=0; i<m; i++) {
//            g[i] = max(f[i], f[(i-x+m) % m] + 1);
//        }
//        f.swap(g);
//    }
//
//    cout << f[0];
//    return 0;
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n,a,k; cin>>n>>k;
    int dp[n+5][k];
    dp[0][0] = 0;
    for(int i=1;i<k;++i)
        dp[0][i]=-1005;
    for(int i=1;i<=n;++i)
    {
        cin>>a;
        a%=k;
        for(int j=0;j<k;++j)
        {
            dp[i][j] = max( dp[i-1][j],dp[i-1][(j+k-a)%k]+1);
        }

    }
    cout<<dp[n][0]<<endl;
}

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


