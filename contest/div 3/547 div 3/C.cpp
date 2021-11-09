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


// here

 void sol()
{
	int n;
    cin >>  n;
    vector <ll> a(n-1);
    for(auto &e: a)
        cin >> e;
    vector<ll> pre(n+1);
    pre[0] = 0;
    fore(i,0,n)
        pre[i+1] = pre[i] + a[i];
    ll mn = *min_element(pre.begin()+1 , pre.end())*1LL;
    if(mn < 0)
        mn = 1-mn;
    else mn = 1;
   /*fore(i,0,n+1)
   cout<<pre[i]<<' ';
   return;*/
    set<ll> s;
    fore(i,0,n)
    {
        pre[i] = pre[i] + mn;
        if(pre[i] > n || pre[i] < 0)
        {
            cout<<-1;
            return ;
        }
         s.insert(pre[i]);
        
    }
   /* for(auto e: s)
        cout <<e<<' ';
    return;*/
    if(s.size() == n)
    {
    fore(i , 0 , n)
    cout<<pre[i]<<' ';
    } else
        cout <<-1;

}

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
     
        sol();
    
    return 0;
}

