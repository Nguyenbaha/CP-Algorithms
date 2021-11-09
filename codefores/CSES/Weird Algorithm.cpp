#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
ll n; cin>>n; cout<<n<<' ';
while(n!=1)
{
	if(n&1)
	{
		n = n*3+1; cout<<n<<' ';
	}
	else
	{
		n/=2; cout<<n<<' ';
	}
}
//cout<<1;
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


