#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ll n,k,a[N];
ll bs(int l,int r,int i)
{
    ll val=a[i]; int cnt=0;
    while(l<=r)
    {
        int mid = (l+r)>>1;
        if(k < val*a[mid] ) r = mid -1;
        else if(k > val*a[mid]) l = mid +1;
        else
        {
            cnt++; int t1=mid-1,t2=mid+1;
            while(val*a[t1]==k && i<t1)
            {
                cnt++;t1--;
            }
            while(val*a[t2]==k){
                cnt++;t2--;
            }
            break;
        }
    }
    return cnt;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

int ans=0;
cin>>n>>k;
for(int i=1;i<=n;++i)cin>>a[i];
sort(a+1,a+1+n);
for(int i=1;i<=n;++i)
    if(a[i]>=k) break;
    else ans+=bs(i+1,n,i);
cout<<ans;
return 0;
}




