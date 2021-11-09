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
        ll n,k; cin>>n>>k;
        if(n<k){
            cout<<"NO"<<endl;continue;
        }
        if(n&1){
            if(k&1)
            {
                cout<<"YES"<<endl;
                for(int i=0;i<k-1;++i)cout<<1<<' ';
                cout<<n-k+1<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(k&1)
            {
                if(n/k < 2) cout<<"NO"<<endl;
                else{
                    cout<<"YES"<<endl;
                    for(int i=0;i<k-1;i++)cout<<2<<' ';
                    cout<<n-(k-1)*2<<endl;
                }
            }
            else{
               cout<<"YES"<<endl;
               for(int i=0;i<k-1;++i)cout<<"1"<<' ';
               cout<<n-k+1<<endl;
            }
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




