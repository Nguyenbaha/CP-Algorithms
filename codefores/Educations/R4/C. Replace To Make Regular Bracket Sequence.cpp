#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
stack<char> st;

void ha()
{
    //[<}){}

    string s; ll ans=0;
    cin>>s;
    for(char i : s){
		if(i == '(' || i == '{' || i == '[' || i == '<'){
			st.push(i);
		}else{
                if(st.empty()){cout << "Impossible" <<endl; exit(0);}
			if(i == ')' && st.top() != '(')ans++;
			if(i == '}' && st.top() != '{')ans++;
			if(i == ']' && st.top() != '[')ans++;
			if(i == '>' && st.top() != '<')ans++;
			st.pop();
		}
		}
   if(!st.empty())cout << "Impossible" <<endl;
	else cout << ans << endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests=1;
//cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}



