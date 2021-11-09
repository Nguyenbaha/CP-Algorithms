#include<bits/stdc++.h>
using namespace std;
map<char,char> mp;
int main()
{
	mp['>']='<',mp['}']='{',mp[']']='[',mp[')']='(';
	string s;
	cin>>s;
	int ans=0;
	vector<char> st;
	for (int i=0;i<s.length();i++)
		if (mp.count(s[i]))
		{
			if (!st.size()) return cout<<"Impossible",0;
			if (st.back()!=mp[s[i]]) ans++;
			st.pop_back();
		}
		else st.push_back(s[i]);
	if (st.size()) cout<<"Impossible";
	else cout<<ans;
}
