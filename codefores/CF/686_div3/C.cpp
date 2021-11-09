#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    ll x;
		cin>>x;
		ll ans=x;
		ll num=1;
		ll n=x;
		for(ll i=2;i<=sqrt(x);i++){
			int now=0;
			while(x%i==0){
				x/=i;
				now++;
			}
			if(now>num){
				num=now;
				ans=i;
			}
		}
		if(ans==x){
			cout<<1<<endl;
			cout<<x<<endl;
		}else{
			cout<<num<<endl;
			for(int i=0;i<num-1;i++){
				n/=ans;
				cout<<ans<<' ';
			}
			cout<<n<<endl;
		}
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



