#include <bits/stdc++.h>
using namespace std;
#define min_3(a,b,c) (min((a),min((b),(c))))
#define all(a) a.begin(),a.end()
#define pb push_back
#define mkp make_pair
#define forn(m,n) for (int i=m; i<n; ++i)
#define fi first
#define se second
#define sz(X) (int)(X).size()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int mod=1e9+7;

void ha()
{

}

int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

//ha();
int m,s;
	cin>>m>>s;
	if(s==0&&m==1)
	return cout<<"0 0",0;
	else if(s==0&&m>1)
	return cout<<"-1 -1",0;
	else if(9*m<s)	return cout<<"-1 -1",0;
	else if(s<=9&&m==1)
	cout<<s<<" "<<s;
	else if(s<=9)
	{
		cout<<"1";
		for(int i=0;i<m-2;i++)cout<<"0";
		cout<<s-1;
		cout<<" ";
		cout<<s;
		for(int i=0;i<m-1;i++)cout<<"0";
	}
	else
	{
		int ss=s-1;
	    int a[m]={0};
		for(int i=0;i<m;i++)
		{
			if(ss>9){a[i]=9;ss=ss-9;}
			else {a[i]=ss;ss=0;}
		}
		reverse(a,a+m);cout<<a[0]+1;
		for(int i=1;i<m;i++)cout<<a[i];
		cout<<" ";
		for(int i=0;i<m;i++)
		{
			if(s>9){cout<<"9";s=s-9;}
			else {cout<<s;s=0;}
		}
	}
	return 0;


return 0;
}





