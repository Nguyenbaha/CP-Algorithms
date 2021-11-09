#include <bits/stdc++.h>
using namespace std;
bool ok(long long mid, long long a, long long b, long long x, long long y)
{
    return mid <= x && mid <= y && (mid*a <= x && mid*b <= y);
}
 
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        long long a,b,x,y;
        cin >> x>> y >> a>> b;
        if(x+y < a+b)
        {
            cout  <<0<<endl;
            continue;
        }
        if(x > y)
            swap(x,y);
        if(a > b)
            swap(a,b);
        if(x == a && y == b)
        {
            cout  <<1<<endl;
            continue;
        }
        if(a==b)
        {
            cout << min(x/a,y/a)<<endl;
            continue;
        }
        if( x<a  || y <b)
        {
            cout <<0<<endl;
            continue;
        }
        int ans  = 0;
        
        long long l=0, r= 1e10,mid;
        while (l <= r)
        {
            mid =(l+r)>>1;
            if(ok(mid,a,b,x,y))
            {
                ans = mid;
                l = mid +1;
            }
            else
                r = mid -1 ;
        }
        x -= a*ans;
        y -= b*ans;
        if(x > y)
            swap(x,y);
       if(x == a || x == y || b==x || b==y)
       ans++;
        cout <<ans<<endl;
    }
}