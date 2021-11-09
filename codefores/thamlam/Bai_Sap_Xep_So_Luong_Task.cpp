#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ; int n;
//😁😁😁😁😁😁😁😁😁😁😁
vector<pair<int,int>> v;
bool  sortbySe( const pair<int,int> &a, const pair<int,int> &b)
{
    return a.second < b.second;
}
void ha()
{
int cnt=1;
int end =  v[0].second;
for(int i=1;i<n;++i)
{
    if(v[i].second == end) continue;
    if(v[i].first >= end)
    {
        cnt++; end = v[i].second;
    }
}
cout<<cnt;
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);
cin>>n; int l,r;
for(int i=0;i<n;++i)
{
    cin>>l>>r;
    v.push_back({l,r});
}
sort(v.begin(),v.end(),sortbySe);
ha();
return 0;
}
//
//
//
//
//#include <bits/stdc++.h>
//using namespace std;
//
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int,int> pii;
//const int N = 2e5+5 ;
////😁😁😁😁😁😁😁😁😁😁😁
//ll ans=INT_MAX, n;
//int a[21],c[21];
//void sinh(int pos, int val,int x)
//{
//    ll t1=0,t2=0;
//    if(pos==x) return;
//    c[pos] = val;
//    for(int i=0;i<n;++i)
//        {
//            if(c[i]) t1+=a[i];
//            else t2+=a[i];
//        }
//    ans = min(ans,(ll)abs(t1-t2));
//    sinh(pos+1,0,x);
//    sinh(pos+1,1,x);
//}
//void Never_give_up()
//
//{
//cin>>n;
//for(int i=0;i<n;++i)cin>>a[i];
//sinh(0,0,n);
//sinh (0,1,n);
//cout<<ans;
//}
//
//signed main() {
//ios::sync_with_stdio(false);
//cin.tie(0);
//
//int tc=1;
////cin >> tc;
//for (int iTest = 0; iTest <tc; ++iTest)
// {
//Never_give_up();
// }
//
// return 0;
//}
