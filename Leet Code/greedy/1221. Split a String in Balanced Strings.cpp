// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (int i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (int i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()


	
			void unstoppable()
		{
	
			string s;
			cin >> s;
			if(s[0]=='-')
			reverse(s.begin()+1,s.end());
		else
			reverse(all(s));
			cout<<s;


		}







	// main

		signed main()
{
    		 std::ios::sync_with_stdio(false);
   		 cin.tie(0);cout.tie(0);
   
            unstoppable();
  
      
       
}

