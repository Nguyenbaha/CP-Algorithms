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
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
    string s; cin>>s;
    int n = s.size();
    for(int i = 1; i<n; ++i)
    {
        if(s[i] >= 'a' && s[i] <= 'z') cout<<s,exit(0);
    }
    if(s[0] >= 'a' && s[0] <= 'z') s[0]-=32;
    for(int i=1; i < n; ++i)
    {
        s[i]+=32;
    }
    cout<<s;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





