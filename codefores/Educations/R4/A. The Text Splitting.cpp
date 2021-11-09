#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n,m,k;
 cin>>n>>m>>k;
 string s; cin>>s;
 for(int x=0;x<=n;++x)
    for(int y=0;y<=n;++y)
 {
     if(x*m+y*k != n) continue;
     int it = 0;
     for(int i=0;i<x;++i)
     {
         cout<<s.substr(it,m)<<endl;
         it += m;
     }

     for(int i=0;i<y;++i)
     {
         cout<<s.substr(it,k)<<endl;
         it+=k;
     }
     return ;
 }
cout<<-1;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests=1;
//cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}


