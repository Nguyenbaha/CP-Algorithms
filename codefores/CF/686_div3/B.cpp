#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n;
    cin>>n;
    vector<int> v(n+1);
    v[0]=INT_MAX;
     map<int,int>mp;
    for(int i=1;i<=n;++i)
        cin>>v[i],mp[v[i]]++;
   vector<int> ans;
    bool b =1;
   for(auto e: mp)
    if(e.second==1)
   {
       b=0;
       ans.push_back(e.first);
   }
   if(ans.size()==0)
   {
       cout<<-1<<endl;
       return;
   }
   int res = ans[0];
   for(int i=1;i<=n;++i)
    if(v[i]==res)
   {
       cout<<i<<endl;
       break;
   }

}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
Never_give_up();
 }

 return 0;
}



