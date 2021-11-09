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
    int n,ck=0;
    cin>>n;
    int a[n],cnt[n];
    for(int i=1;i<=n;++i)cnt[i]=i;
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        if(a[i]<i) ck=1;
        if(a[i]>i) swap(cnt[a[i]],cnt[i]);
    }
    if(ck) cout<<-1;//8<<endl;
    else for(int i=1;i<=n;++i)cout<<cnt[i]<<' ';
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





