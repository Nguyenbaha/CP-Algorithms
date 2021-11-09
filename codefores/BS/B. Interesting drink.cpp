#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int a[N];
ll res=0;
void ha(ll n, ll k)
{
    ll l=0,r=n,mid;
    while(l<=r)
    {
        mid = (l+r)>>1;
        if(a[mid] <= k)
        {
            res = mid, l = mid+1;
        }
        else r = mid -1;
    }
    cout<< res<<endl;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
int n; cin>>n;

for(int i=1;i<=n;++i) cin>>a[i];
sort(a+1,a+n+1);
int q; cin>>q;
while(q--)
{
    int k; cin>>k;
    ha(n,k);
}
return 0;
}




