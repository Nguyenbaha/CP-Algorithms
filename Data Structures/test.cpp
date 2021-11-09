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
int  n;
bool flag;
string s, t, str1, str2;
 void unstopable()
{
    cin >> s >> t;
        n = s.size();
        flag = false;
        for(int i = 0; i < n; i++){
            str1 = s.substr(0, i);
            str2 = s.substr(0, i+1);
            reverse(str2.begin(), str2.end());
            str1 += str2;
            if(str1.find(t) != -1){
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else    cout << "NO" << endl;
    
    
 
 
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
