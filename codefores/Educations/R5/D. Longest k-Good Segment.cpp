#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int a[500005],f[5000005];
void ha() {
 int n,k; cin>>n>>k;

int cnt=0;
 for(int i=1;i<=n;++i) cin>>a[i];

 int l=1,r=1,j=1;

 for(int i=1;i<=n;++i)
 {
     f[a[i]]++;
     if(f[a[i]]==1)
        cnt++;

     while(cnt>k)
     {
         f[a[j]]--;
         if(!f[a[j]])
            cnt--;
         j++;
     }
     if(r-l<i-j)
     {
          r = i; l =j;
     }
 }
 cout<<l<<' '<<r;
 return;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

ha();


 return 0;
}


