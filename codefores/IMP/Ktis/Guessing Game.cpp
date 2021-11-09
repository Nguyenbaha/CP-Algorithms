#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    int n;
    vector<bool> v;
    v.resize(11,false);
    while(cin>>n && n!=0)
    {
        string s,r;
        cin>>s>>r;
       if(r=="high")
       {
           for(int i=n;i<=10;++i)
            v[i] = true;
       }
       else if(r=="low")
       {
           for(int i=0;i<=n;++i)
            v[i] = true;
       }
       else
       {
           if(v[n]) cout<<"Stan is dishonest"<<endl;
           else cout<<"Stan may be honest"<<endl;

           v.clear();
           v.resize(11,false);
       }
    }
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


