
#include <bits/stdc++.h>
using namespace std;

 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,s;
    cin >> n >> s;
    vector <long long> a(n);
    for(auto &e: a)
        cin >> e;
    long long total =0, l =0,ans =0;
    for(long long r = 0; r < n; ++r)
        {
            total += a[r];
            while(total > s)
            {
                total -= a[l++];
            }
           
            ans +=  r -l +1;
        }
    cout << ans;
}
