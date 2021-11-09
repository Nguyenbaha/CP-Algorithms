#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here

void sol()
{
    int n,x,y,ans,a;
    map<int,int> mp;
    multiset<int> ms;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        mp[a]++;
    }
    for(auto e: mp)
        ms.insert(e.second);
    ans  = n;
    while(true)
    {
        if(ms.size() <= 1) break;
        auto it = ms.begin();
        x = *it;
        ms.erase(it);
        it= --ms.end();
        y = *it;
        ms.erase(it);
        --x,--y;
        if(x>0) ms.insert(x);
        if(y>0) ms.insert(y);
        ans -= 2;
    }
    cout<<ans<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
    sol();
 }


}
