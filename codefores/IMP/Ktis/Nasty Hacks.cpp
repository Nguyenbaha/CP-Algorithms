#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll a,b,c; cin>>a>>b>>c;
    ll res= b-c;
    if(a>res)
    {
        cout<<"do not advertise";
    }
    else if(a-res==0)
    {
        cout<<"does not matter";
    }
    else
        cout<<"advertise";
    cout<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



