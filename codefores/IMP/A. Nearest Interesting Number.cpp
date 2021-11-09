#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

int proc(int n)
{
     vector<int> r;
    while(n)
    {
        int tmp = n%10;
        r.push_back(tmp);
        n/=10;
    }
    int s=0;
    for(auto e: r)
        s+=e;
        return s;
}
void Never_give_up()

{
        int n; cin>>n;
        int cur=n;
        int t=0;
    for(int i=0;i<=1000;++i)
    {
        int res = proc(n+t);
                if(res%4==0)
        {
            cout<<n+t; return;
        }
        t++;
    }

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


