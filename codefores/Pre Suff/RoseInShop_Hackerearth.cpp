#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#define pb push_back
#define sz size()
#define ff first
#define ss second
#define ll long long int
#define ld long double
#define bp __builtin_popcountll
#define FOR(i,a,b) for(i=a;i<b;i++)
#define ROR(i,a,b) for(i=a;i>b;i--)
#define FORE(i,a,b) for(i=a;i<=b;i++)
#define RORE(i,a,b) for(i=a;i>=b;i--)
#define pii pair<int,int>
#define pll pair<ll,ll>
const int M=1e9+7;

int main()
{
    FAST;
    ll n,i,j,ans=0;
    cin>>n;
    ll smell[n],pre[n],suf[n];
    for(i=0;i<n;i++)
        cin>>smell[i];
    pre[0]=1;
    for(i=1;i<n;i++)
    {
        if(smell[i]>smell[i-1])
            pre[i]=pre[i-1]+1;
        else
            pre[i]=1;

        ans=max(ans,pre[i]);
    }
    suf[n-1]=1;
    for(i=n-2;i>=0;i--)
    {
        if(smell[i]<smell[i+1])
            suf[i]=suf[i+1]+1;
        else
            suf[i]=1;

        ans=max(ans,suf[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(smell[i-1]<smell[i+1])
            ans=max(ans,pre[i-1]+suf[i+1]);
    }
    cout<<ans<<"\n";
}
