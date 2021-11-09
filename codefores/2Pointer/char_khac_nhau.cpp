#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    string s; cin>>s;
    set<char> st;
    int l=0,r=0,ans=0;
    while(l<s.size() && r<s.size())
    {
        if(st.find(s[r])==st.end())// khong tim thay
        {
            st.insert(s[r++]);
            ans = max(ans,r-l);
        }
        else
        {
            st.erase(s[l++]);
        }
    }
    cout<<ans;
}
//cout<<ans;


signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}



