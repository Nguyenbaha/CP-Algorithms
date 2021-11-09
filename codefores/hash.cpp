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
const int mod=1e9+3;
//😁😁😁😁😁😁😁😁😁😁😁
int mod = 100000003;
int p[100000003],h[100000003];

void init() {

    p[0] =1;

    for (int i = 1; i <= s.size(); i++) {
    p[i] = p[i-1]*H;

    }

    }

void hashing(string s, ll h[]) {

    h[0] = s[0];
    for(int i=0; i < s.size();++i)
        h[i] = h[i-1]*H + (int)s[i];

    }

    ll getHash(ll h[], int i, int j) {

    if (i==0) {

    return h[j];

    }

    return (h[j] - h[i-1]*p[j-i+1]);

}

int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

string T,P;
T = "" + T;
P = "" + P;
cin>>T>>P;
for(int i=1;i<(T.size()-P.size()+1);++i)
    if(getHash(T[],0,i))
return 0;
}




