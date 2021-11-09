#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
/// móa 
int n, l, r, perm[502], used[502], sum;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for(; t; --t)
    {
        cin >> n >> l >> r >> sum;
        int poz = n;
        int lft = r-l+1;
        bool bun = 1;
        for(int i = l; i <= r; ++i)
        {
            while(poz > 0 && sum - poz < 1LL * (lft-1) * (lft) / 2)
                --poz;
            if(poz == 0)
                bun = 0;
            perm[i] = poz;
            sum -= poz;
            used[poz] = 1;
            --lft;
            --poz;
        }
        poz = 1;
        for(int i = 1; i <= n; ++i)
        {
            if(!perm[i])
            {
                while(used[poz])
                    ++poz;
                perm[i] = poz;
                used[poz] = 1;
            }
        }
        if(sum != 0)
            bun = 0;
        if(!bun)
            cout << -1 << endl;
        else
        {
            for(int i = 1; i <= n; ++i)
                cout << perm[i] << " ";
            cout << endl;
        }
        for(int i = 1; i <= n; ++i)
            perm[i] = used[i] = 0;
    }
    return 0;
}