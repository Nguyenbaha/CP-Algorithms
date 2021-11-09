#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
    int tc; cin>>tc;
    while(tc--)
    {
        string s; cin>>s;
        int ans=mod,cnt0=0,cnt1=0,zero=0,one=0;
        int n=s.size();
        for(int i=0;i<n;++i)
            if(s[i]=='1') ++cnt1;
            else ++cnt0;
        for(int i=0;i<n;++i)
        {
            if(s[i]=='1') ++one;
            else ++zero;
            ans = min(ans,min(one + cnt0 - zero, zero + cnt1 - one));
        }
        cout<<ans<<endl;
    }

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




