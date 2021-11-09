#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

string s, ans="",res="";
bool ck[26];
int cnt =0;
bool ckeck(string a)
{
    string b=a;
    reverse(b.begin(),b.end());
    if(a==b) return true;
    else return false;
}
void Never_give_up()

{
    cin>>s;
    if(ckeck(s)){ cout<<s; return;}
    for(char &c: s)
    {
        if(!ck[c-'A'])
        {
           cnt++; ck[c-'A']=true;
        }
        else
        {
            cnt--;
            ck[c-'A']=false;
            ans+=c;
        }
    }
    if(cnt>=2)
    {
        cout<<"NO SOLUTION";
        return;
    }
    cout<<ans;
    for(char  c = 'A'; c<='Z';++c)
        if(ck[c-'A']) {cout<<c; break;}

    reverse(ans.begin(),ans.end());
    cout<<ans;
}

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


