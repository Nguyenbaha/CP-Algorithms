#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{	//Loser
	int n,t,p,x=0,cnt=0;cin>>n>>t;
	int s[n];
	for(int i=1;i<=n;++i)
	{
		cin>>p;
		s[i]=s[i-1]+p;
		if(s[i]-s[x]>t) x++;
		cnt=max(i-x,cnt);
	}
	cout<<cnt;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





