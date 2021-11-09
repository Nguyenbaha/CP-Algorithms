#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
  ll ans=LONG_MAX;
int n,m;
int a[9],c[9];
void sinh(int pos, int val, int lim,int as)
{
    if(pos==lim) return;
    c[pos] = val;
    vector<int> s1,r1;
    int s=0,r=0;
    for(int i=0;i<n;++i)
    {
        if(c[i])
           s+=a[i],s1.push_back(a[i]);
        else r+=a[i],r1.push_back(a[i]);
    }
    if(s==as)
    {
        sort(s1.begin(),s1.end(),greater<int>());
        sort(r1.begin(),r1.end(),greater<int>());
        for(auto e: s1) cout<<e<<' ';
        for(auto e: r1) cout<<e<<' ';
        cout<<endl;return;
    }
    else if(r==as)

    {
        sort(s1.begin(),s1.end(),greater<int>());
        sort(r1.begin(),r1.end(),greater<int>());
        for(auto e: r1) cout<<e<<' ';
        for(auto e: s1) cout<<e<<' ';
        cout<<endl;
        return;
    }
    else
    {

    sinh(pos+1,0,5,n);
  //  sinh(pos+1,1,5,n);
    }
}
void Never_give_up()

{

    for(int i=0;i<6;++i)
        cin>>a[i];
    cin>>n>>m;
    sinh(0,0,5,n);
   // sinh(0,1,5,n);

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


