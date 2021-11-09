#include <bits/stdc++.h>
using namespace std;
string a,b;
int main(){
   cin >> a >> b;
   // abcaa
   //cab
   for(int i=0;i<a.size();i++){
      string t = a.substr(i, a.size()-i);
      int z = b.find(t);
      if (z >= 0) {
         cout << a+b.substr(a.size()-i, b.size());
         return 0;
      }
   }
   cout << a + b;
   return 0;
}
