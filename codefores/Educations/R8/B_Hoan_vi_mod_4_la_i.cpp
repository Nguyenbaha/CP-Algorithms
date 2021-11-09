
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
int64_t ans=0;
for(int i=0;i<s.size();++i)
{
    int64_t tmp =int64_t(s[i]-'0');
    if( tmp % 4 == 0) ans++;
    if(i)
    {
        int64_t res = int64_t(s[i-1]-'0');
//res = res*10 + tmp;
        if((res*10 + tmp)%4==0) ans+=i;
    }
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


