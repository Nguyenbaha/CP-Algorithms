#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
deque<char> a;
int n; cin>>n;
string s; cin>>s;
if(s.size()&1)
{
    for(int i=0;i<n;++i)
        if(i&1) a.push_front(s[i]);
        else a.push_back(s[i]);
}
else
{
    for(int i=0;i<n;++i)
        if(i&1)
        a.push_back(s[i]);
        else a.push_front(s[i]);
}
for(int i=0;i<n;++i)
{cout<<a.front();a.pop_front();}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





