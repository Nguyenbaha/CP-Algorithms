#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020

void Never_give_up()

{
    ll n;
    cin>>n;
//    vector<ll> a(n);
//    ll s=0;
//    for(ll i=0;i<n;++i)
//    {
//        cin>>a[i];
//        s+=a[i];
//    }
    vector<ll> a,ans;
    for(ll i=0;i<n;++i)
    {
        ll tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    ans.push_back(a[0]);
    for(ll i=1;i<n;++i)
    {
        if(a[i]%ans[i-1]==0 || ans[i-1]%a[i]==0)
            ans.push_back(a[i]);
        else
        {
            if(a[i]>ans[i-1])
            {
                ll tmp = (a[i]/ans[i-1])*ans[i-1];
                if(abs(a[i]-tmp) < abs(a[i]-ans[i-1]))
                {
                    ans.push_back(tmp);
                }
                else ans.push_back(ans[i-1]);
            }
            else
            {
                if(abs(a[i]-ans[i-1]) < abs(a[i]-1))
                   ans.push_back(ans[i-1]);
                   else ans.push_back(1);
            }
        }
    }
    for(auto e: ans) cout<<e<<' ';
    cout<<endl;
//    vector<ll> ans;
//    for(ll i=0;i<n-1;++i)
//    {
//        if(a[i]%a[i+1]== 0 || a[i+1]%a[i]== 0 )
//            ans.push_back(a[i]);
//    }
//    if(ans.size()==a.size())
//    {
//        for(auto r: ans) cout<<r<<' ';
//        cout<<endl;
//        return;
//    }

//    for(int i=0;i<n;++i)
//        cout<<a[0]<<' ';
//    cout<<endl;


}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
Never_give_up();
 }

 return 0;
}

