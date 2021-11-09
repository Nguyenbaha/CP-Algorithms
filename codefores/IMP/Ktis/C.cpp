#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    string a,b;
 cin >> a >> b;
   // abcaa
   //cab
   for(int i=0;i<a.size();i++){
      string t = a.substr(i, a.size()-i);
      int z = b.find(t);
      if (z >= 0) {
         cout << a+b.substr(a.size()-i, b.size());
         return ;
      }
   }
   cout << a + b;
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


