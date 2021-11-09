
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

    void unstoppable()
{
    int n;
    cin >> n;
    vector<int> a(n);
    fore(i,0,n)
        cin >> a[i];
    int m =  n -1;
    int cnt =0;
    while(1)
    {
        if(m == 0 )
            break;
        int ok = 0;
        fore(i,0,n-1)
        {
            if(a[i]>a[i+1])
                ok = 1;
        }
        if(ok==0)
            break;
        for(int i=n -1; i >=1; i--)
        {
            if(a[i] - a[i-1] < 0)
            {
                swap(a[i],a[i-1]);
                m --;
                
            }
        }
        

    }
    fore(i,0,n)
        out(a[i])<< ' ';
    cout<<endl;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   int q;
    cin >> q;
    while (q--){
        
        unstoppable();
    }
    return 0;
}




  



