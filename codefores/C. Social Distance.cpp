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
int tc; cin>>tc;
while(tc--)
{
    int n,k,cnt=1; cin>>n>>k;
    string s; cin>>s;
    bool hi=true;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='1'){ hi==false; break;}
        else hi==true;
    }
    if(hi==true)
    {
        if(k>n) cout<<0<<endl;
        else if(k==n) cout<<1<<endl;
        else if(k<n) cout<<n/(k+1)<<endl;
    }
    else {
    int d = k+1;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0' && s[i+1]=='0') cnt++;

        else if(s[i]=='0' && s[i+1]!='0')
        {
            if(cnt>=d)
            {v.pb(cnt);
            cnt=0;}
        }

    }
    int sum=0;
    for(int i=0;i<v.size();++i)
    {
        int h = v[i]/2;
        sum+=h;
    }

   cout<<sum<<endl;
}
}
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





