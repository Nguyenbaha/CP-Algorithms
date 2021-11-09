#include<bits/stdc++.h>
using namespace std;
int tc;
int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	cin >> s;
	
	int cnt =0;
	int w=0;
	int l=-1,r=-1;
	for(int i=s.size()-1; i >= 0; --i)
		if(s[i] == ']')
		{
			r = i;
			w++;
			break;
		}

	for(int i=0; i < s.size(); ++i)
		if(s[i] == '[')
		{
			l = i;
			w++;
			break;
		}
		/*cout <<l<<" "<<r;;
		return 0;*/
	if( r-l+1 < 4 || w < 2)
	{
		cout <<-1;
		return 0;
	}
	//
	for(int i = l+1 ;i <=  r-1; ++i)
	{
		if(s[i] ==':')
			++cnt;
	}
	if(cnt < 2)
	{
		cout <<-1;
		return 0;
	}
// main: 
	deque <char> dq;
	bool ok = 0;
	int ll=-2,rr=-2;
	for(int i=l+1; i<= r-1; ++i)
	{
		if(s[i]==':')
		{
			ll = i;
			dq.push_back(s[i]);
			break;
		}
	}
	for(int i=r-1; i>l;--i)
	{
		if(s[i]==':')
		{
			rr = i;
			dq.push_back(s[i]);
			break;
		}
	}
	for(int i=ll+1; i<= rr-1;++i)
	{
		if(s[i] =='|')
			dq.push_back(s[i]);
	}
	cout <<dq.size()+2;
}