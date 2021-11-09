
#include <bits/stdc++.h>
using namespace std;

 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> a(n), b(m);
    for(auto &e: a)
        cin >> e;
    long long ans =0 ;
    while(m --)
    {
        int tmp;
        cin >> tmp;
        int l = lower_bound(a.begin(),a.end(),tmp) - a.begin();
        int r = upper_bound(a.begin(),a.end(),tmp) - a.begin();
        ans += (r-l);
    }
    cout <<ans;
}
