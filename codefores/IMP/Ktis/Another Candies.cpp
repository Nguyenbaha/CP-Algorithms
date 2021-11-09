#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const int mod = 1e9+7;
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        ull ans=0;
        ull x;
        cin>>x; ll t=x;
        ull a;
        while(x--)
        {
            cin>>a; a%=t;
            ans += a;
        }
        if(ans%t==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
