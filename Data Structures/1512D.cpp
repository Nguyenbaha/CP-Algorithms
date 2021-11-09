// Nguyễn Bá Hà
 
#include <bits/stdc++.h>
using namespace std;
 
#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (int i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (int i=a-1,ThxDem=b;i>=ThxDem;i--)
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
// 2*SumA + X = SumB
//==>Sum-2*SumA = X;
// SumA + X + SumA = SumB || SumA + SumA + X = SumB
// find X in B;
// 
 void unstopable()
{
    int n;
    cin >> n;
    vector<int> a(n+2);
    fore(i,0,n+2)
        cin >> a[i];
    sort(all(a));
    ll SumA= accumulate(a.begin(),a.begin()+n,0LL);
 
    if(SumA == a[n])
    {
        fore(i,0,n)
            cout<<a[i]<<' ';
            cout<<endl;
            return ;
    }
    
    SumA +=a[n];
    
    ll X = SumA - a[n+1];
// X+A+A = SB
    int id = upper_bound(a.begin(),a.begin()+n+1,X)- a.begin()-1;
   
    if(a[id] == X)
    {
        fore(i,0,n+1)
            if(i!=id)
                cout<<a[i]<<' ';
        cout<<endl;
        return ;
    }
    cout<<-1<<endl;
    
    
 
 
}
 
signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   int q;
    cin >> q;
    while (q--){
        
        unstopable();
    }
    return 0;
}
