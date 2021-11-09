#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int a[21],n,m;
void in()
{
    for(int i=1;i<=n;++i)
        cout<<a[i];
    cout<<endl;
}
void sinh(int pos,int x)
{
    for(int i=1;i<=x;++i)
    {
        a[pos] = i;
        if(pos==n) in();
        else sinh(pos+1,x);
    }
}

void Never_give_up()

{
        cin>>m>>n;
        cout<<pow(m,n)<<endl;
        sinh(1,m);
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


