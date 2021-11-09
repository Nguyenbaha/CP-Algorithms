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
int t; cin>>t;
while(t--)
{
    int n; cin>>n; int odd=0,even=0;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]%2 != i%2)
        {
            if(a[i]%2) odd++;
            else even++;
        }
    }
    cout<<(odd==even ? odd : -1)<<endl;
}
}
int main()
{
std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




