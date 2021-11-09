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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
typedef unsigned long long ull;
typedef long long ll;
const ll MAXN= 100005;
typedef pair<ll,ll> pii;
const ll mod= 1e9+7;



// here

 void unstopable()
{
    int n;
    cin >> n;
    vector <int > a(n*4);
    
    fore(i,0,4*n)
    {
        cin >>a[i];
       
    }
    sort(all(a));
    int area = a[0]*a.back();
    for(int i=0;i < n*4; i+=2)
    {
        if(a[i]!=a[i+1])
        {
            cout <<"NO"<<endl;
            return ;
        }
    }

    for(int i=1; i < 4*n; i+=2)
    {
        int tmp = a[i]*a[4*n-i-1];
        if(tmp != area)
        {
            no;
            return;
        }
    }
    yes;
    
}

signed main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
   int q;
    cin >> q;
    while (q--){
        
        unstopable();
    }
    return 0;
}