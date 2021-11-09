#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;
const ll base = 311;
const int maxn = 1e6+6;
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
int T=1;

// in các vị trí xuất hiện của xâu P trong T
// Here
string p,t;
ll powbase[maxn];
vector <int> ans;
ll h[maxn];

ll gethash(int l, int r)
{
   
    return (h[r] - h[l-1]*powbase[r-l+1]%mod+mod)%mod;
}
void unstoppable()
{
    cin >> t >> p;

    powbase[0] = 1;
    int lent = t.size();
    int lenp = p.size();
    for(int i=1; i <= lent; ++i)
        powbase[i] = powbase[i-1]*base%mod;
    
    for(int i=0; i < lent; ++i)
        h[i ] = (h[i-1]*base+t[i]-'a'+1)%mod;
    ll hashP = 0;
    for(int i=0; i < lenp; ++i)
        hashP = (hashP*base+p[i]-'a'+1)%mod;
    int cnt =0;
    for(int i=0; i <= (lent-lenp+1); ++i)
        if(gethash(i,i+lenp-1) == hashP)
        {
            cnt ++;
        }
        cout << cnt;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

   // cin >> T;
    while(T--)
{
    unstoppable();
 }


}




///
/*
typedef long long ll;

const int base = 31;
const ll MOD = 1000000003;
const ll maxn = 1000111;

using namespace std;

ll POW[maxn], hashT[maxn];


ll getHashT(int i,int j) {
    return (hashT[j] - hashT[i - 1] * POW[j - i + 1] + MOD * MOD) % MOD;
}


int main() {
    // Input
    string T, P;
    cin >> T >> P;

    // Initialize
    int lenT = T.size(), lenP = P.size();
   
    POW[0] = 1;

    // Precalculate base^i
    for (int i = 1; i <= lenT; i++)
        POW[i] = (POW[i - 1] * base) % MOD;

    // Calculate hash value of T[1..i]
    for (int i = 0; i < lenT; i++)
        hashT[i] = (hashT[i - 1] * base + T[i] - 'a' + 1) % MOD;

    // Calculate hash value of P
    ll hashP=0;
    for (int i = 0; i < lenP; i++)
        hashP = (hashP * base + P[i] - 'a' + 1) % MOD;

    // Finding substrings of T equal to string P
    for (int i = 0; i <= lenT - lenP + 1; i++)
        if (hashP == getHashT(i, i + lenP - 1))
            printf("%d ", i);
}*/