#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
int tc; cin>>tc;
while(tc--)
{
    int n; cin>>n;
    int a[n],f[n],mn=INT_MAX;
    for(int i=1;i<=n;++i)f[i]=0;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        if(f[a[i]]==0) f[a[i]]=i;
        else
        {
            mn = min(mn,i-f[a[i]]+1);
            f[a[i]]=i;
        }
    }
   mn==INT_MAX ? cout<<"-1" : cout<< mn;
    cout<<endl;
}

}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





