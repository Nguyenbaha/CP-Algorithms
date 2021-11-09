#include <bits/stdc++.h>
using namespace std;
 #define int long long
 #define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;
int T=1;

/*

─────────▄──────────────▄
────────▌▒█───────────▄▀▒▌
────────▌▒▒▀▄───────▄▀▒▒▒▐
───────▐▄▀▒▒▀▀▀▀▄▄▄▀▒▒▒▒▒▐
─────▄▄▀▒▒▒▒▒▒▒▒▒▒▒█▒▒▄█▒▐
───▄▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀██▀▒▌
──▐▒▒▒▄▄▄▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄▒▒▌
──▌▒▒▐▄█▀▒▒▒▒▄▀█▄▒▒▒▒▒▒▒█▒▐
─▐▒▒▒▒▒▒▒▒▒▒▒▌██▀▒▒▒▒▒▒▒▒▀▄▌
─▌▒▀▄██▄▒▒▒▒▒▒▒▒▒▒▒░░░░▒▒▒▒▌
─▌▀▐▄█▄█▌▄▒▀▒▒▒▒▒▒░░░░░░▒▒▒▐
▐▒▀▐▀▐▀▒▒▄▄▒▄▒▒▒▒▒░░░░░░▒▒▒▒▌
▐▒▒▒▀▀▄▄▒▒▒▄▒▒▒▒▒▒░░░░░░▒▒▒▐
─▌▒▒▒▒▒▒▀▀▀▒▒▒▒▒▒▒▒░░░░▒▒▒▒▌
─▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐
──▀▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▌
────▀▄▒▒▒▒▒▒▒▒▒▒▄▄▄▀▒▒▒▒▄▀
───▐▀▒▀▄▄▄▄▄▄▀▀▀▒▒▒▒▒▄▄▀
──▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▀

*/
// Here
bool ok( )
{

}
//here
int n,d;
void never_give_up()
{
    cin >> n >> d;
    int  m =  n;
    vector<pair<int,int>> v;
    vector<int> res;
    for(int i=0;i <n; ++i)
    {
        int l,r;
        cin >> l >> r;
        v.push_back({l,r});
    }
    int t = 0;
    sort(v.begin(),v.end());
    int f[N];

    int ans = 0;

    for(int i=0; i <n ;++i)
    {
        f[i+1] = f[i] + v[i].second;
    }

//    for(int i=0;i <= n;++i)
//        cout << f[i] << ' ';
//    return;
    for(int i=0;i < n;++i )
    {
        int id = upper_bound(v.begin(),v.end(),make_pair(v[i].first +d-1 ,_I64_MAX)) - v.begin();
    ans  = max(ans, f[id]-f[i]);

    }
    cout << ans;
//    for(auto e: res)
//        cout << e<<' ';

}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    while(T--)
{
    never_give_up();
 }


}
