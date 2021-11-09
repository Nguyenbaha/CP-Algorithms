#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n; cin>>n;
int a[n]; int cnt=0,c=0;
for(int i=0; i<n;++i)
{
    cin>>a[i];
    if(a[i]&1) cnt++;
    else c++;
}
if(cnt&1 && cnt!=0) cout<<"YES"<<endl;
else if (cnt%2==0 && cnt!=0)
{
    if(c>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
else cout<<"NO"<<endl;
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



