#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here
 const ll base = 311;
 const ll mod  = 1e9+7;
 ll A[25],B[25],P[25];
 string a,b;

 void cal()
 {
     P[0] = 1;
     for(ll i=1;i<25;++i)
        P[i] = P[i-1]*base%mod;
     for(ll i=1;i<a.size();++i)
        A[i] = (A[i-1]*base + a[i]-'a'+1)%mod;
     for(ll i=1;i<b.size();++i)
        B[i] = (B[i-1]*base + b[i]-'a'+1)%mod;
 }
 ll get(ll T[], ll i, ll j)
 {
     return (T[j] - T[i-1]*P[j-i+1] +mod*mod)%mod;
 }
 bool find(ll i, ll j)
{
	ll val = get(A, i, j);
	ll len = j - i + 1;
	for(ll i = 1; i <= b.size() - len; i++)
		if(get(B, i, i + len - 1) == val)
			return true;
	return false;
}

void sol()
{
	cin >> a >> b;
	a = ' ' + a;
	b = ' ' + b;
	ll ans = a.size() + b.size() - 2	;
	cal();
	for(ll i = 1; i <= a.size(); i++)
		for(ll j = i; j <= a.size(); j++)
			if(find(i, j))
			{
				ll len = j - i + 1;
				ll x = a.size() +b.size()-2*len-2;
				ans = min(ans, x);
			}
	cout << ans << endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
    sol();
 }


}
