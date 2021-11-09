#include<bits/stdc++.h>
using namespace std;

int n,k, dist =0 ;
vector <int> fr;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> k;
    fr.assign(n+1,0);
    while( k--)
    {
        int a;
        cin >> a;
        fr[a]++;
        if(fr[a] == 1)
            dist++;
        if(dist == n)
        {
            cout << 1;
            for(int i=1; i <= n; ++i)
                {
                    if(--fr[i] == 0)
                        dist --;
                }
        }
        else
            cout << 0;
    }
}