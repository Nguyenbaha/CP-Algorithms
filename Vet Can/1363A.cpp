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
    int n,k, eve=0, odd=0;
    cin >> n >> k;
    vector < int> a(n);
    fore(i,0,n)
    {
        cin >> a[i];
        if(a[i]&1) odd++;
        else eve++;
    }
    if(!odd)
    {
        cout <<"NO"<<endl;
        return ;
    }
   
    if (k < n) 
    {
       
        if(eve % 2 == 0)
        {
            if(eve == 0)
            {
                if(k&1)
                {
                    cout<<"YES"<<endl;
                    return ;
                }
                else
                {
                    cout <<"NO"<<endl;
                    return ;
                }

            }
            else
            {
                 cout<<"YES"<<endl;
                    return ;
            }
        }
        if(eve == n)// == : odd = 0
        {
            cout <<"NO"<<endl;
            return ;
        }
        if(eve && odd )
        {
            cout <<"YES"<<endl;
            return ;
        }
        else
        {
            cout <<"NO"<<endl;
            return;
        }


    }
    else
    {
        
            if(odd&1)
            {
                cout<<"Yes"<<endl;
                return;
            }
            else
            {
                cout<<"NO"<<endl;
            }
       

    }
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