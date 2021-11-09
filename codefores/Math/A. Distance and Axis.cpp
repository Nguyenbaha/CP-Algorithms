#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int a[3],b[3];
for(int i=0;i<3;++i)cin>>a[i];
for(int i=0;i<3;++i)cin>>b[i];
int x=0,y=0,z=0;
if(a[2]>b[2]) z = a[2]*2;
if(a[2]<b[2]) z = -1*a[2]*2;
if(a[1]<b[1]) y = -1*a[1]*1;;
if(a[1]>b[1]) y = a[1]*1;
x = z+y;
cout<<x<<endl;
}


signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests;
cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}



