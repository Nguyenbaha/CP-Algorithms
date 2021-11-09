#include <bits/stdc++.h>
using namespace std;
#define int long long
#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define ALL(s) s.begin(),s.end()
 const int mod= 1e9+7;

int fpow(int a, int n){
    if (n==0) return 1;
    if (n%2==1) return (a*fpow(a*a%mod,n/2))%mod;
    else return fpow(a*a%mod,n/2);
}
typedef unsigned long long ull;
int T=1;

int n,m;
vector<int> a(N),b(N);
int dp[1005][1005]={0,0};

void never_give_up()
{
    cin >> n >> m;

    for(auto &i: a)
        cin >> i;
    for(auto &j: b)
        cin >> j;
    dp[0][0]=0;
    for(int i=0;i <= n ;++i)
        for(int j=0 ;j <= m; ++j)
        if(i ==0 || j==0)
            dp[i][j] = 0;
        else if(a[i]==b[j])
            dp[i][j] = dp[i-1][j-1] + 1;
        else dp[i][j] = max(dp[i-][j], dp[i][j-1]);
    // truy vet
    vector<int> res;
    auto trade = [&] (int i, int j)
    {
        if(i == 0 || j == 0)
            res.clear();
        else if(a[i] == b[j])
        {
            trade(i-1, j-1);
            res.push_back(a[i]);
        }
        else if(dp[i][j] == dp[i-1][j])
            trade(i-1,j);
        else trade(i,j-1);
    }
    trade(n,m);
    for(auto e: res)
        cout << e<< ' ';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(T--)
{
    never_give_up();
 }


}

