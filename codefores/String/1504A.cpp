#include <bits/stdc++.h>
using namespace std;
#define int long long
#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define ALL(s) s.begin(),s.end()
 const int mod= 1e9+7;
 
int fpow(int a, int n){
    if (n==0) return 1;
    if (n%2==1) return (a*fpow(a*a%mod,n/2))%mod;
    else return fpow(a*a%mod,n/2);
}
typedef unsigned long long ull;
int T;


// Here


void unstoppable()
{
   string s;
   set<char> st;
   cin >> s;
   string ans="";
   for(char c: s)
    st.insert(c);
    if(s[0]=='a' && st.size() == 1)
    {
        cout << "NO"<<endl;
        return ;
    }
    int cnta=0, cntb=0;
    for(int i=0; i<s.size(); ++ i)
        if(s[i]!='a') break;
        else cnta++;
    for(int i=s.size() - 1; i>=0; --i)
        if(s[i]!='a') break;
        else cntb++;
    if(cnta > cntb)
    {
        ans += 'a';
        ans += s;
    }
    else
    {
        ans += s;
        ans += 'a';
    }
    cout<<"YES"<<endl<<ans<<endl;


}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    unstoppable();
 }


}

