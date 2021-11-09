#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
//here

void sol()
{
   string s;
   int n;
   map<char,int> mp;
   cin >> n>>s;
   for(int i =0 ; i < s.size(); ++i)
   {
       mp[s[i]]++;
       if(i==0) continue;
       if(s[i] != s[i-1] && mp[s[i]] >= 2)
       {
           cout<<"NO"<<endl;
           return;
       }
   }
   cout<<"YES"<<endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    sol();
 }


}
