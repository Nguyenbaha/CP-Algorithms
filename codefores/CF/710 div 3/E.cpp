#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here

void sol()
{
    int n; cin>>n;
    vector<int> a(n+1);
    set<int> s;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        s.insert(i);
    }
    for(int i=1;i<=n;++i)
    {
        auto it = s.find(a[i]);
        if(it != s.end())
        {
            cout<<a[i]<<' ';
            s.erase(a[i]);
        }
        else
        {
            cout<<*s.begin()<<' ';
            s.erase(*s.begin());
        }
    }
    cout<<endl;
    for(int i=1;i<=n;++i)
        s.insert(i);
    for(int i=1;i<=n;++i)
    {
        auto it = s.find(a[i]);
        if(it != s.end())
        {
            cout<<a[i]<<' ';
            s.erase(a[i]);
        }
        else
        {
            it = --s.lower_bound(a[i]);
            cout<<*it<<' ';
            s.erase(*it);
        }
    }
    cout<<endl;
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
