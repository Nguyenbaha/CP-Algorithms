#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=n;i>=1;--i)
       v.push_back(i);
    if(n&1 &&  n>1)
       {
           swap(v[n/2],v[n/2+1]);
       }
       for(auto e: v)
            cout<<e<<' ';
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



