   // Nguyễn Bá Hà

#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define fore(i,a,b) for (ll i=a,ThxDem=b;i<ThxDem;i++)
#define ford(i,a,b) for (ll i=a-1,ThxDem=b;i>=ThxDem;i--)
#define pb push_back
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),rs.end()

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<int,int> pii;
const ll mod= 1e9+7;
const ll g= 1e8;
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl

const int maxm=2e6+5;
const int p=911382323;
string s;
ull base[maxm];
ull h[maxm];
ull h2[maxm];
int res[maxm];
ull get(int l,int r){
    return h[r]-h[l-1]*base[r-l+1];
}
ull get2(int l,int r){
    return h2[l]-h2[r+1]*base[r-l+1];
}
 void unstopable()
{
    cin >> s;
    s = " "+s;
    int n=s.size();
    base[0]=1;
    for(int i=1;i<=n;i++){
        base[i]=base[i-1]*p;
        h[i]=h[i-1]*p+s[i];
    }
    for(int i=n;i>=1;i--)
    {
        h2[i]=h2[i+1]*p+s[i];
    }
  // 
    res[1]=1;
    for(int i=2;i<=n;i++){
        int t=i/2;
        ull a1=get(1,t),a2=get2(i-t+1,i);
        if(a1==a2){
            res[i]=res[t]+1;
        }
    }
   /* for(int i=1;i<=n;i++){
        cout<<a[i]<<' ';
    }
    return ;*/
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=res[i];
    }
    cout<<ans;
    
}


signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
  
}




