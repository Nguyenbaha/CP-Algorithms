
#include<bits/stdc++.h>
using namespace std;

#define ll long long;

void sol()
{
    int n;
    cin>>n; if(n==1)
    {
        cout<<1; return;
    }
    else if(n==2 || n==3)
    {
        cout<<"NO SOLUTION";
        return;
    }
    else
    {
        if(n&1)
        {
            for(int i=2;i<n;i+=2)
                cout<<i<<' ';
             for(int i=1;i<=n;i+=2)
                cout<<i<<' ';
        }
        else
        {
            for(int i=2;i<=n;i+=2)
                cout<<i<<' ';
             for(int i=1;i<=n;i+=2)
                cout<<i<<' ';
        }
        }
    }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    sol();
}
