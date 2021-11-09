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
const int N = 2000006;
int Z[N];
string s,p;
//😁😁😁😁😁😁😁😁😁😁😁
void ha_Z(const string &s, int Z[])
{
    int n=s.size(),l=0,r=0;
    Z[0]=0;
    for(int i=1;i<n;++i)
    {
        if(i>r)
        {
            l=r=i;
            while(r<n && s[r-l]==s[r]) ++r;
            Z[i] = r-l; --r;
        }
        else
        {
            int k = i - l;
            if(Z[k] < r-i+1) Z[i] = Z[k];
            else{
                l=i;
                while(s[r]==s[r-l]) ++r;
                Z[i] = r-l;--r;
            }
        }
    }


}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

cin>>s>>p;
s = p + ' ' + s;
ha_Z(s,Z);
for(int i=p.size();i<s.size();++i)
    if(Z[i] >= p.size()) cout<<i-p.size()<<' ';
return 0;
}




