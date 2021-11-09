#include <bits/stdc++.h>
using namespace std;



 







 map<char,int>m;
   map<char,int>mp ;
signed main()
 {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

  int n,q;
  cin >>  n >> q;
  string s;
  cin >> s;

  string res ="abcdefghijklmnopqrstuvwxyz";
 /*cout<<res.size();
 return 0;*/
  int cnt=1;
 for(auto e: res)
    mp[e]=cnt,cnt++;

  while(q--)
  {
    int l,r;
    cin >> l >> r;
    l--,r--;
    
   int ans=0;
    for(int i=l; i<=r; ++i)
        ans += (mp[s[i]]);

    cout<<ans<<endl;

  }


}