
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
vector<pii> v;
map<int,int> mp;
void Never_give_up()

{
int n; cin>>n;

int ok=0,tmp;

int l=1,r;
for(int i=1;i<=n;++i)
{
    cin>>tmp;
    if(!mp[tmp]) mp[tmp]++;
    else
    {
        mp.clear();
        r = i;
        v.push_back({l,r});
        l = i+1;
    }
}
if(v.size()==0) cout<<-1;
else
{
    v.back().second=n;
    cout<<v.size()<<endl;
    for(auto e: v)
        cout<<e.first<<' '<<e.second<<endl;
}

}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



