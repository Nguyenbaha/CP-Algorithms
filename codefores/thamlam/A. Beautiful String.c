#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
    string s; cin>>s;
    int d=0; int n=s.size();
    for(int i=0;i<n-1;++i)
    {
        if(s[i]!='?' && s[i]==s[i+1]) d++;
    }
    if(d) cout<<-1<<endl;
    else
    {
        for(int i=0;i<n;++i)
        {
            if(s[i]=='?')
                s[i] ='a';
            if(s[i]==s[i-1] || s[i]==s[i+1])
                s[i] = 'b';
             if(s[i]==s[i-1] || s[i]==s[i+1])
                s[i] = 'c';
        }
        cout<<s<<endl;
    }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int nbTests;
cin >> nbTests;
for (int iTest = 0; iTest < nbTests; ++iTest) {
ha();
}
 return 0;
}


