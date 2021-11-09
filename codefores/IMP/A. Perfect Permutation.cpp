#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n; cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;++i)
        a[i]=i+1;
    if(n==1) { cout<<-1; return;}
    reverse(a.begin(),a.end());
    if(n&1)
    {
        cout<<-1; return;
    }
    for(auto e: a)
        cout<<e<<' ';
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



