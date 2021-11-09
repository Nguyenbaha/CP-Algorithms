#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,ans=0;
    cin>>n>>m;
    if(n>m) swap(n,m);
    while(n!=0 && m>=2)
    {

        n--,m-=2;
        ans++;
        if(n>m) swap(n,m);
    }
    cout<<ans;
}
