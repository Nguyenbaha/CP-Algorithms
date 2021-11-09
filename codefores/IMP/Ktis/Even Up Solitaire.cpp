#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    stack<int> s;
    int n; cin>>n;
    while(n--)
    {
        int a; cin>>a;
        if(s.size()!=0 && (s.top()+a)%2==0)
            s.pop();
        else s.push(a);
    }
    cout<<s.size();
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



