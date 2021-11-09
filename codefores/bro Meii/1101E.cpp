#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int l,r;
    char t;
    int mn=INT_MIN, mx = INT_MIN;
    while(n--)
    {
        cin >> t >>l >> r;
        if( l > r)
           swap(l,r);
        if(t == '+')
        {
            mn = max(l, mn);
            mx = max(r, mx);
        }
        else
        {
           
            if(mn <= l && mx <= r )
            {
                cout <<"YES";
            }
            else
                cout <<"NO";
            cout <<endl ;    
           }
    }
}