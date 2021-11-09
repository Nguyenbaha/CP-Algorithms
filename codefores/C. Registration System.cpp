#include <bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;
//😁😁😁😁😁😁😁😁😁😁😁
map<string,int> mp;
void ha()
{
    ll n; cin>>n;
    while(n--){
string s; cin>>s;
mp[s]++;
if(mp[s]!=1) cout<<s<<mp[s]-1<<endl;
else cout<<"OK"<<endl;
}}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





