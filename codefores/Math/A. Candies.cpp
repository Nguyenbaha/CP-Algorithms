#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {

int n; cin>>n;
int cur = 1;
for(int i=1;i<=30;++i)
{
    cur += (1<<i);
    if(n%cur==0  )
       {
       cout<<n/cur<<endl; return;
       }
}
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


