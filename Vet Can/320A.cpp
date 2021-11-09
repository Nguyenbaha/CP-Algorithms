#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(int i=0; i < s.size(); ++i)
	{
		if(s[i] != '1' && s[i]!='4')
		{
			cout <<"NO";
			return 0;
		}
		if(s[i] == '1')
		{
			if(s[i+1] =='1')
			{
				i++;
				continue;
			}
			if(s[i+1] =='4')
			{
				i++;
				continue;
			}
			
		}
		if(s[i]=='4')
		{
			if(s[i-1] =='4')
			{
				if(s[i-2]!='1')
				{
					cout <<"NO";
				return 0;
				}
			}
			 else if(s[i-1] != '1' )
			{
				cout <<"NO";
				return 0;
			}
			else
			{
				i++;
				continue;
			}
		}
	}
	cout<<"YES";
}