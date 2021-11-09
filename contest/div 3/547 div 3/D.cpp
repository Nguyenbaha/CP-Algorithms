// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a,ThxDem=b;i>ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;



// here

 void sol()
{
	int n;
	cin >> n;
	string a,b;
	cin >> a>> b;
	stack <int> aa[27], bb[27];
	vector < pii> ans;
	if(a == b)
	{
		cout << n <<endl;
		fore(i,1,n+1)
		cout<<i<<' '<<i<<endl;
		return ;
	}
	fore(i, 0, n)
	{
		if(a[i] == '?')
			aa[26].push(i);
		else
			aa[a[i]-'a'].push(i);
	}
	fore(i, 0, n)
	{
		if(b[i] == '?')
			bb[26].push(i);
		else
			bb[ b[i]-'a'].push(i);
	}
	fore(i,0,26)
		while(aa[i].size() && bb[i].size())
	{
		ans.pb({aa[i].top(),bb[i].top()});
		aa[i].pop();
		bb[i].pop();
	}
	if(aa[26].size())
	{
		fore(i, 0, 26)
			while(aa[26].size() && bb[i].size())
			{
				ans.pb({aa[26].top(),bb[i].top()});
				aa[26].pop();
				bb[i].pop();
			}
	}
	if(bb[26].size())
	{
		fore(i, 0, 26)
			while(bb[26].size() && aa[i].size())
			{
				ans.pb({aa[i].top(),bb[26].top()});
				aa[i].pop();
				bb[26].pop();
			}
	}

	while(aa[26].size()&&bb[26].size())
	{
		ans.pb({aa[26].top() , bb[26].top()});
		aa[26].pop();
		bb[26].pop();
	}
	cout <<ans.size()<<endl;
	for(auto e: ans)
		cout <<e.fi+1<<' '<<e.se+1<<endl;

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
     
        sol();
   
    return 0;
}
