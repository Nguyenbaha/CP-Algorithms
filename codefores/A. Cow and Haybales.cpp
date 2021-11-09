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
int tc; cin>>tc;
while(tc--)
{
    int n,d; cin>>n>>d;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    while(d--)
    {
        for(int i=1;i<n;++i)
        {
            if(a[i]>0)
            {
                a[i]--;
                a[i-1]++;break;
            }
        }

    }
    cout<<a[0]<<endl;
}


}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}





