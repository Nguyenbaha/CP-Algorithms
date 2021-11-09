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
#define rall(s) s.rbegin(),s.rend()
 #define prec(n) fixed<<setprecision(n)
typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define minpq(s) priority_queue<int, vector<int>, greater<int>> = s;
// __gcd(n,0) = n;

// here
// ptdt:  y=a*x =>> a = x/y;
set<double> s;
double cnt = 0;

 void unstopable()
{
    int n; double x,y;
	cin>> n >> x >> y;
    int m = n;
    while(m--)
    {
        double l,r;
        cin >>  l>>r ;
        // y!=r vì sẽ compiER khi chia cho 0;
        if(y == r)
            cnt=1;
        else 
            s.insert((l-x)/(r-y));

    }
    cout<<s.size()+cnt<<endl;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
  
}