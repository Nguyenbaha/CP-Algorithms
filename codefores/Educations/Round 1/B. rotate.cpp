#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
string s; cin>>s;
int m; cin>>m;
while(m--)
{
  int l,r,k; cin>>l>>r>>k;
  k %= (r-l+1);
  //rotate(str.begin()+l-1, str.begin() + r - k, str.begin()+r);
  rotate(s.begin()+l-1, s.begin()+r-k,s.begin()+r);
  //rotate(str.begin()+l-1, str.begin() + r - k, str.begin()+r);
}
cout<<s;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests=1;
//cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}



