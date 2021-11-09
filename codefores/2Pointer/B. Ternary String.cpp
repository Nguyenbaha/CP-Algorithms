#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
string s; cin>>s;
int p1=-1,p2=-1,p3=-1;
int ans=INT_MAX;
for(int i=0;i<s.size();++i)
{
    if(s[i]=='1') p1=i;
    if(s[i]=='2') p2=i;
    if(s[i]=='3') p3=i;
    if(p1!=-1 && p2!=-1 && p3!=-1)
    {
        int mn= min(p1,min(p2,p3));
         int mx= max(p1,max(p2,p3));
         ans = min(mx - mn +1,ans);
    }
}
if(ans==INT_MAX) cout<<0<<endl;
else cout<<ans<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests;
cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}


