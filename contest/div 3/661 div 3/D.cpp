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
// idea: pos1: lưu số lượng chuỗi con xuất hiện bằng 1; pos0 tương tự;
// nếu s[i]=='0' thì phải có chuỗi '1' để nối vào thành 101010---
// và xóa phần tử cuối cùng của post1 và cho nó vào pos0
// nếu không có thì tăng số lượng chuỗi phân biệt nên 1
// post 1 làm tương tự!
     void unstopable()
{
       int n;
       string s;
       vector<int> ans;
       vector<int> pos0 , pos1;
       cin >> n;
       cin >> s;
       fore(i,0,n)
       {    
            int newpost = pos1.size() + pos0.size()+1 ;
            if(s[i] =='0')
            {
                if(pos1.size() == 0)
                {
                    ans.pb(newpost) ;
                    pos0.pb(newpost);
                }
                else
                {
                    newpost = pos1.back() ;
                    pos1.pop_back();
                    pos0.pb(newpost);
                    ans.pb(newpost);
                }
            }
            else
                if(s[i] == '1')
            {
                if(pos0.size() == 0)
                {
                    pos1.pb(newpost);
                    ans.pb(newpost);
                }
                else
                {
                    newpost = pos0.back();
                    pos0.pop_back() ;
                    pos1.pb(newpost);
                    ans.pb(newpost);
                }
            }
       }
       cout << *max_element(all(ans)) <<endl;
       for(auto e: ans)
        cout<<e<<' ';
    cout<<endl;
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




