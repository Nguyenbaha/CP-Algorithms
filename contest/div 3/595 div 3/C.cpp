// Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a,ThxDem=b;i>ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;

vector<ll> gen;


// here


    void init()
{
    ll n=1;
    gen.pb(1);
    while(n <= 1e18)
    {
        n*=3;
        gen.pb(n);
    }

}
    
    void sol()

{
    ll n;
    cin >> n;
    ll s = 0;
    ll pos =0;
    fore(i,0,gen.size())
    {
        s += gen[i];
        if(s >= n)
        {
            pos = i-1;
            break;
        }
    }
    if( s == n)
    {
        cout << s<<endl;
        return ;
    }
    // 1 3 9 
    // s= 14 - -
    while(pos >= 0)
    {
        if(s - gen[pos] >= n)
            s -= gen[pos];
        pos--;
    }
    cout <<s<<endl;

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   int q;
   init();
    cin >> q;
    while (q--){
        
        sol();
    }
    return 0;
}

