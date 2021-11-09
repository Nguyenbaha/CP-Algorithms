#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int n;  ll ans=LONG_MAX;

int a[21],c[21];
void sinh(int pos, int val, int res)
{
    if(pos==res) return;
    c[pos] = val;
    ll t1=0,t2=0;
    for(int i=0;i<n;++i)
    {
        if(c[i])
            t1+=a[i];
        else t2+=a[i];
    }
    ans = min(ans,(ll)abs(t1-t2));
    sinh(pos+1,0,res);
    sinh(pos+1,1,res);
}
void Never_give_up()

{
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
    sinh(0,0,n);
    //sinh(0,1,n);
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



//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long ll;
// #define prec(n) fixed<<setprecision(n)
//const int N = 2e5+5 ;
////😁😁😁😁😁😁😁😁😁😁😁
//// @ by HaNguyen -- 2021---
////here
//  int64_t n,p,s;
//void sol()
//{
//    cin>>n>>s>>p;
//    int64_t cnt = 0;
//    vector<int64_t> a(n);
//    for(int i=0;i<n;++i)
//        cin>>a[i];
//    //sort(a.begin(),a.end());
//    vector<int> ans;
//    for(int i=1;i<(1<<20);++i)
//    {
//        int64_t s1=0,c=0;
//        for(int j=0;j<n;++j)
//        {
//            if((i>>j)&1) s1+=a[j],c++;
//            if(s1==s) {
//                ans.push_back(c);
//            }
//        }
//    }
//    if(ans.size() < 1) cout<<-1;
//    else
//    {
//        sort(ans.begin(),ans.end());
//        cout<<ans[0]*p;
//    }
//}
//
//signed main() {
//ios::sync_with_stdio(false);
//cin.tie(0);
//
//int tc=1;
////cin >> tc;
//while(tc--)
//{
//    sol();
// }
//
// return 0;
//}
//
