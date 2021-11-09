#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
int tc; cin>>tc;
while(tc--)
{
    int n; cin>>n;
    int a[N];

    map<int,int> mp;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int s = mp.size();
    int mx=0;
    for(auto e: mp)
    {
        mx = max(mx,e.second);
    }
    if(mx==s) cout<<s-1<<endl;
    else cout<<min(mx,s)<<endl;
}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





