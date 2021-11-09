#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

ll pr(int n)
{
    ll a[n+1];
    ll i2=1,i3=1,i5=1;
    a[1]=1;
    for(int i=2;i<n;++i)
    {
        a[i] = min(a[i2]*2,min(a[i3]*3,a[i5]*5));
        if(a[i] == a[i2]*2)
            i2 ++;
        if(a[i] == a[i3]*3)
            i3 ++;
            if(a[i] == a[i5]*5)
            i5 ++;
    }
    return a[n];
}
void Never_give_up()

{
     int n; cin>>n;
     cout<<pr(n)<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



