#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n; cin>>n;
    int d[101]={0};
    int a[101];
    for(int i=1;i<=n;++i)
    {
        cin>>a[i];
        d[a[i]]++;
    }
    vector<int> v;
    int cnt=0;
    for(int i=0;i<=100;++i)
        if(d[i]==1) cnt++;
        else if(d[i]>1) v.push_back(d[i]);
    bool ck=1;
        for(int i=0;i<v.size();++i)
        if(v[i]%2!=0)
    {
        ck = 0;
        break;
    }
    if(cnt%2!=0 && ck==0)
    {
        cout<<"NO";
        return;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i+=2)
            cout<<"BA";
    }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
while(tc--)
{
Never_give_up();
 }

 return 0;
}



