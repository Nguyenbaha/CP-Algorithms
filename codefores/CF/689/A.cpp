#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;++i)
        cout<<'a';
    for(int i=1;i<=n-k;++i)
    {
        if(i%3==1) cout<<'c';
        else if(i%3==2) cout<<'b';
        else cout<<'a';

    }
    cout<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
Never_give_up();
 }

 return 0;
}



