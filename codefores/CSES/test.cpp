#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n; cin>>n;
    int a[n];
    int cnt0=0;
    ll res=0;
    vector<ll> v1,v2,v3,ans;
        for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]==0)
            cnt0++;
        res+=a[i];
        if(a[i]>0)
                v1.push_back(a[i]);
        if(a[i]==0)
            v3.push_back(a[i]);
        if(a[i]<0)
            v2.push_back(a[i]);
    }


    sort(v1.begin(),v1.end());
      sort(v2.begin(),v2.end(),greater<ll>());
        sort(v3.begin(),v3.end());
    for(auto e: v1)
        ans.push_back(e);
    for(auto e: v2)
        ans.push_back(e);
        for(auto e: v3)
            ans.push_back(e);


    //sort(a,a+n,greater<int>());
   // 3 -3 -4
     //swap(a[0],a[n-1]);
      if(cnt0==n || res==0)
    {
        cout<<"NO"<<endl;
       goto L;
    }
    cout<<"YES\n";
    for(auto e: ans)
            cout<<e<<' ';
    cout<<endl;
    L: ;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


