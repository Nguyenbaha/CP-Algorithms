#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
  string s; cin>>s;
  string s1="",s2="",s3="";
  int n=s.size();
  n/=3;
  set<string> st;
  s1 = s.substr(0,n);
  s2 = s.substr(n,n);
  s3 = s.substr(2*n,s.size()-1);
//  cout<<s1<<endl<<s2<<endl<<s3;
  map<string,int> mp;
  mp[s1]++;
  mp[s2]++;
  mp[s3]++;
  string ans="";
  for(auto e: mp)
  {
      if(e.second>1)
       {
           ans = e.first; break;}
  }
  cout<<ans;
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



