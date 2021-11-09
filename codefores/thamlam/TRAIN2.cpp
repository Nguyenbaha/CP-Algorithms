#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;

void ha()
{
ll t,k; cin>>k>>t;
if(k==0)cout<<0;

else
{
    ll  tmp = t/k;
    if(tmp&1) cout<<k-t%k;
    else cout<<t%k;
}
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





