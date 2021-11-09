
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha() {
int n; cin>>n;
int r =1;
while(5*r < n)
{
    n -= r*5;
    r*=2;
}
string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
cout<<s[(n-1)/r];
}
// bai nay kho vc xem Toturial moi biet lam
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


