#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
   int c = 0;
    string s;
    cin>>s;
    for(int i = 0 ; i < s.size() ;i++)
    {
        if(s[i]=='4' || s[i]=='7') c++;
    }
    if(c==4 || c==7) cout<<"YES";
    else cout<<"NO";
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


