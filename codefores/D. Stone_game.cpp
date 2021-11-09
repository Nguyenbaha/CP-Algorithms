#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
int n; cin>>n;
vector<int> v(n);
ll s=0;
for(int &i: v)cin>>i,s+=i;
int maxx = *max_element(v.begin(),v.end());
if(s&1 || maxx > s/2) cout<<"T"<<endl;
else cout<<"HL"<<endl;

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



