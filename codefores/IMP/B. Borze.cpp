#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
string s;
void Never_give_up()

{
    cin>>s;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='.') cout<<0;
        else if(s[i]=='-')
        {
            if(s[i+1]=='.') cout<<1;
            else if(s[i+1]=='-') cout<<2;
            i++;
        }
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



