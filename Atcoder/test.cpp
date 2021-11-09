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

typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;

#define yes cout<<"YES"<<endl;
#define no  cout<<"NO"<<endl;


// here

 void unstopable()
{
	int a,b,c;
    cin >> a>> b>>c;
    if(c%2==0)
    {
        a = abs(a);
        b = abs(b);
    }
    if(a > b)
    {
        cout <<">";
    }
    else if(a < b)
        {cout <<"<";}
    else
        cout <<"=";
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   
        
        unstopable();
    
}