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
#define out(x) cout << x 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl


// here
int n;

 void unstopable()
{
    cin >>  n;
   vector<int>a(n),b(n-1),c(n-2);
   ll s1=0,s2=0,s3=0;
    fore(i,0,n)
    {
        cin >> a[i];
        s1+=a[i];
    }	
    fore(i,0,n-1)
    {
        cin >> b[i];
        s2+=b[i];
    }   
    fore(i,0,n-2)
    {
       cin >> c[i];
       s3+=c[i];
    }   
    cout<<s1-s2<<endl<<s2-s3;
    /*sort(all(a));
    sort(all(b));
    sort(all(c));
    b.pb(INT_MAX);
        c.pb(INT_MAX);
    fore(i,0,n)

        if(a[i]!=b[i])
        {
            cout<<a[i]<<endl;break;
        }
    fore(i,0,n-1)

        if(c[i]!=b[i])
        {
            cout<<b[i]<<endl;break;
        }*/
    

}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
  
}