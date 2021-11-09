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
#define rall(s) s.rbegin(),rs.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
/*🙈Xin gọi E là 🌞
Vì yêu E A chỉ thấy sáng suốt🤣*/

// here

 void unstopable()
{
  int n;
    string s, t;
    cin >> n >> s >> t;
    string abc = "abc";
    vector<string> res;
    do {
        string cur;
        for (int i = 0; i < n; ++i) cur += abc;
        res.push_back(cur);
        res.push_back(string(n, abc[0]) + string(n, abc[1]) + string(n, abc[2]));
    } while (next_permutation(abc.begin(), abc.end()));
    
    /*for (auto str : res) {
        cout<< str<<endl;
    }*/
    for (auto str : res) {
        if (str.find(s) == string::npos && str.find(t) == string::npos) {
            cout << "YES" << endl << str << endl;
            return ;
        }
    }
    
   
    cout << "NO" << endl;
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
   
}







