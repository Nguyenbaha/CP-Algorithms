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
int cnt=0;
for(int i=0;i<s.size();++i)
{
    if((int)s[i]%2==0) cnt++;
}
for(int i=0;i<s.size();++i)
{
    if((int)s[i]%2==0)
    {
        cout<<cnt<<' '; cnt--;
    }
    else cout<<cnt<<' ';
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


