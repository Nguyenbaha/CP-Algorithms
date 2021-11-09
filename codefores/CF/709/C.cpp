#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here

void sol()
{
    ll n,m;
    vector<ll> ans;
    cin>>n>>m;
    ll t=m;
    bool ok=0;
    while(t--)
    {
        ll k; cin>>k;
        vector<ll> res;
        while(k--)
            {
                ll x;
                cin>>x;
                res.push_back(x);
            }
       ll tmp;
       sort(res.begin(),res.end());
    ll l=0, r= t-1, mid;
    while(l<=r)
    {
        mid =(l+r)>>1;
        if(res[mid] < m/2)
        {
            tmp = res[mid];
            l = mid +1;
        }
        else r = mid - 1;
    }
    if(k==0) tmp=res[0];
        //cout<<tmp<<endl;
        if(tmp < m/2 || t==0) ans.push_back(tmp);
        else {
            if(t==1) ok=1;
            else ok=1;
        }
    }
    if(ok==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        for(auto e: ans)cout<<e<<' ';
        cout<<endl;
    }
//cout<<"hr"<<ok<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
    sol();
 }


}
