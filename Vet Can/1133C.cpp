
#include <bits/stdc++.h>
using namespace std;


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,s;
    cin >> n;
    vector <long long> a(n);
    long long res=INT_MIN;
    for(auto &e: a)
        cin >> e;
    sort(a.begin(),a.end());
    for(int i=0; i < n; ++i)
        {
            int tmp = upper_bound(a.begin(),a.end(),a[i]+5)-a.begin();
            res = max(res, tmp-i+0LL);
        }
    cout << res;
    
}
