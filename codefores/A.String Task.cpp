#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
string s; cin>>s;
for(int i=0;i<s.size();++i)
{
    if(s[i] <'a') s[i] += 32;
    if(s[i]=='a'|| s[i]=='o'|| s[i]=='y'|| s[i]=='e'|| s[i]=='u'|| s[i]=='i') continue;
    else cout<<"."<<s[i];
}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





