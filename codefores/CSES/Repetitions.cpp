#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
string s;
map<char,int> f;
void Never_give_up()

{
    cin>>s;
   vector<int> v;
   int cnt=1;
   int n=s.size();
   if(n==1){ cout<<1; return;}
   for(int i=0;i<n-1;++i)
   {
       if(s[i]==s[i+1])
        cnt++;
        else cnt=1;
       v.push_back(cnt);
   }
   sort(v.begin(),v.end());
   cout<<v[v.size()-1];

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


