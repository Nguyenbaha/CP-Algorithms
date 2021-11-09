#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;

//here

void sol()
{
    string s;
    int n,k;
    cin>>n>>k;
    cin>>s;
    vector<int> id;
    for(int i=0;i<n;++i)
        if(s[i]=='*')
        id.push_back(i);
    int ans=id.size();
    int tmp=0;
    for(int i=2 ; i<id.size();++i)
    {

        if(id[i]-id[tmp] <=k) ans--;
        else tmp = i-1;

    }
    cout<<ans<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
    sol();
 }


}
