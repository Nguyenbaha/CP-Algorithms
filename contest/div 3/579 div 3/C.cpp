// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;

#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;
#define int long long

// here
int fact(int n)
{
    int cnt =0 ;
    for(int i =1; i*i <= n; ++i)
    {
        if(i*i==n)
            cnt++;
        else if(n%i==0)
        {
            cnt+=2;
        }
    }
    return cnt;
}


 void unstopable()
{
	int n;
    cin >> n;
    vector<int>a(n);
    cin >> a[0];
    int g = a[0];
    fore(i,1,n)
    {
        cin >> a[i];
        g = __gcd(g,a[i]);
    }
    if(g == 1)
    {
        cout << 1;
        return ;
    }
    cout << fact(g);
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
      
        unstopable();
    
}