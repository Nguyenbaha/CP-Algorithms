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



// here

 void unstopable()
{
	int n;
    cin >> n;
    vector <int> a(n), cmp1(n),cmp2;
    for(auto &e: a)
        cin >> e;
    fore(i,0,n)
    cmp1[i] = i+1;
    cmp2 = cmp1;
    reverse(cmp2.begin(),cmp2.end());
    if(a==cmp1 || a == cmp2)
    {
        cout<<"YES"<<endl;
        return ;
    }
    int m = n;
    while(m--)
    {
        rotate(a.begin() ,  a.begin()+1, a.end());
       
        if(a == cmp1 || a==cmp2)
        {
            cout<<"YES"<<endl;
        return ;
        }
    }
    cout <<"NO"<<endl;
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
