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
    vector<int> v;
    int l=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]&1) l++;
    }
    int r=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]%2==0)
        {
            cout<<1<<endl<<i+1<<endl;
            return;
        }
    }
    if(l<2) {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;++i)
    {
        if(a[i]&1)
        {
            v.push_back(i+1);
            r++;
        }
        if(r==2) break;
    }
    cout<<2<<endl;
    for(auto e:v) cout<<e<<' ';
    cout<<endl;
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



