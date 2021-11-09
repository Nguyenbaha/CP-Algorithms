#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int a[N];
void Never_give_up()

{
    // 2 3 7 9
    int n,lim; cin>>n>>lim;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    sort(a,a+n);
    int ans =0;
    int i=0; int j= n-1;
    while(i<=j)
    {
        if(a[i]+a[j]>lim) j--;
        else i++,j--;
        ans++;
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


