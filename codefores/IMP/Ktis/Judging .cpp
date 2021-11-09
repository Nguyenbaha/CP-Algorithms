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
        vector<string>a(n),b(n);
        for(int i=0;i<n;++i)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=0;i<n;++i)
            cin>>b[i];
        sort(b.begin(),b.end());
        ll ans=0;
        int i=0,j=0;
        while(a.size()>0 && b.size()>0)
        {
            if(a.back()==b.back())
               {
            ans++;
            b.pop_back();
            a.pop_back();
            }
            else
                if(a.back()>b.back())
            {
                a.pop_back();
            }
            else
            b.pop_back();

        }
        cout<<ans;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc=1;
//cin >> tc;
for (int iTest = 0; iTest <tc; ++iTest)
 {
Never_give_up();
 }

 return 0;
}


