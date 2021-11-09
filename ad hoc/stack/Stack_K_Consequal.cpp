#include <bits/stdc++.h>
using namespace std;

 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T=1;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
//here
string s,ans="";
int n,k;
deque<pair<char,int>> de;
void sol()
{
   cin >> n >>k;
   cin >> s;
    for(int i=0; i < n; ++i )
    {
        if(!de.empty() && de.back().first == s[i])
            de.back().second ++;
        else
            de.push_back({s[i],1});
        if( de.back().second == k)
            de.pop_back();
    }
    if(de.empty())
    {
        cout<<" ";
        return;
    }
    while(!de.empty())
    {
        cout<<string(de.front().second,de.front().first);
        de.pop_front();
    }

}



signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //cin >> T;
    while(T--)
{
    sol();
 }


}
