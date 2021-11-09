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
vector<int> z_algorithm(string pattern) {
    
    int n = pattern.size();
    vector<int> Z(n, 0);
    Z[0] = n;
    int loc = 1;

    for (int i = 1; i < n; i++) {
        if (i < loc + Z[loc])
            Z[i] = min(Z[i - loc], loc + Z[loc] - i);

        while (i + Z[i] < n && pattern[Z[i]] == pattern[i + Z[i]])
            Z[i]++;

        if (i + Z[i] > loc + Z[loc])
            loc = i;
    }

    return Z;
}

 void unstopable()
{
    string s;
	cin >> s;
    vector<int> Z = z_algorithm(s);
    int n = s.size() , mx= 0;
    fore(i,1,n)
    {
        if(min(Z[i],mx) >= n-i )
        {
            cout << s.substr(i);
            return ;
        }
        mx = max(mx,Z[i]);
    }
     cout << "Just a legend" << '\n';
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        unstopable();
  
}