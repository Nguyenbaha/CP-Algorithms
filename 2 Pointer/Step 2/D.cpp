
#include <bits/stdc++.h>
using namespace std;

 // sum >= s
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n,s;
    cin >> n >> s;
    vector <long long> a(n);
    long long res=0;
    for(auto &e: a)
        cin >> e,res+=e;
    if(res < s)
    {
        cout <<0;
        return 0;
    }
    sort(a.begin(),a.end());
    long long total =0, l =0,ans =1;
    for(long long r = 0; r < n; ++r)
        {
            total += a[r];
            while(total -a[l] >= s)
            {
                total -= a[l++];
              
            }
            if(total >= s)
                ans +=  (r-l+1);
          
        }
    cout << ans;
}
