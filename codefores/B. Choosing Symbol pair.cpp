#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
string s;
int ar[100005];
cin>>s; ll ans=0;
for(int i=0;i<s.size();++i)
{
    ar[s[i]]++;
    ans+=ar[s[i]]*2-1;
}
cout<<ans;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




