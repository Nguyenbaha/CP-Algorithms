#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n; cin>>n;
int a[n];
for(int i=1;i<=n;++i) cin>>a[i];
int l=1,r=n,ff=0,ss=0;
for(int i=1;i<=n;++i)
{
    if(i&1)
    {
        if(a[l]>a[r]) ff+=a[l++];
        else ff+=a[r--];
    }
    else
    {
         if(a[l]>a[r]) ss+=a[l++];
        else ss+=a[r--];
    }
}
cout<<ff<<' '<<ss;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests=1;
//cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}



