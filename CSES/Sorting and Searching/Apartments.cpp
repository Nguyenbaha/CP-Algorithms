#include <bits/stdc++.h>
using namespace std;


 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
// __gcd(n,0) = n;

//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2021---
//here

void sol()
{
    int n,m,k;
    cin>>n>>m>>k;
    priority_queue<int,vector<int>,greater<int>> q1,q2;
    fore(i,0,n)
    {
        int t;
        cin >> t;
        q1.push(t);
    }
    fore(i,0,m)
    {
        int t;
        cin >> t;
        q2.push(t);
    }
    ll ans  =0;
    while(q1.size() && q2.size())
    {
        if(q1.top() < q2.top())
        {
            int tmp = q1.top()+k;
            int tmp2 = q2.top();
            if(tmp >= tmp2)
            {
                ans++;
                q1.pop();
                q2.pop();
            }
            else
            {
                q1.pop();
            }
        }
        else
        {
            int tmp = q1.top();
            int tmp2 = q2.top()+k;
            if(tmp2 >= tmp)
            {
                ans++;
                q1.pop();
                q2.pop();
            }
            else
            {
                q2.pop();
            }
        }
    }
    cout<<ans;
}


signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
while(tc--)
{
    sol();
 }

 return 0;
}
