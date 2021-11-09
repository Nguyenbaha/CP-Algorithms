#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n,m;  cin>>n>>m;
int a[n]; int s=0;
for(int i=0;i<n;++i)cin>>a[i],s+=a[i];
sort(a,a+n);
reverse(a,a+n);
int ans=0;
while(m>0)
{
    m-=a[ans++];
}
cout<<ans;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);


ha();

 return 0;
}



