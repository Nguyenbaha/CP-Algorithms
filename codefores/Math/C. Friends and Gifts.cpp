#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {

int n; cin>>n;
set<int> s;
for(int i=1;i<=n;++i)
{
    s.insert(i);
}
int a[n];
for(int i=1;i<=n;++i)
{
    cin>>a[i];
    if(a[i]) s.erase(a[i]);

}
vector<int> v;
for(auto e: s) v.push_back(e);
//sort(v.begin(),v.end(),greater<int>());
int j=0;
for(int i=1;i<=n;++i)
{
    if(a[i]==0) cout<<a[i];

}
}


//sort(b+1,b+1+n);

//0001467 - 01467
//1234567


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



