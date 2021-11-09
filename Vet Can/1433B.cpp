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
	int n , cnt =0 ,l=0,r=0;
    cin >> n;
    vector<int>a(n);
    fore(i,0,n)
    {
        cin >> a[i];
        if(a[i] == 1)
            cnt ++;
    }
    if(cnt == 1)
    {
        cout << 0<<endl;
        return ;
    }
   /* l = find(a.begin(),a.end(),1)-a.begin();
    r = a.rend()-find(a.rbegin(),a.rend(),1);*/
    l = 0, r = n -1;
    while(a[l] == 0)
        l++;
    while(a[r] == 0)
        r--;
    cnt = 0;
    fore(i,l,r)
    {
        if(a[i] == 0)
            cnt++;
    }
    cout <<cnt<<endl;

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