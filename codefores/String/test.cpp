//https://codeforces.com/contest/126/problem/B
#include <bits/stdc++.h>
using namespace std;
#define NAME "B. Password"
#define ll long long
const ll base = 311;
const ll MOD = 1e9 + 7;
const int maxn = 1e6+1;
ll pwbase[maxn];
ll h[maxn];

ll getHash(int l, int r){ // 0 index;
    l++;r++;
    return (h[r] - h[l-1]*pwbase[r-l+1]%MOD + MOD )%MOD;
}
int main(){
    //ifstream cin(NAME".inp");
    //ofstream cout(NAME".out");
    string s;
    cin>>s;
    //cout<<s;
    int n = s.length();
    pwbase[0]=1;
    for(int i=1;i<=n;i++) pwbase[i]=pwbase[i-1]*base%MOD;

    h[1]= s[0];
    for(int i=1;i<n;i++)
        h[i+1]=(h[i]*base + s[i])%MOD;

    vector<int> vl;
    for(int l=n-1;l>0;l--){
        if (getHash(0,l-1)==getHash(n-1-l+1,n-1)){
            //break;
            vl.push_back(l);
        }
    }

    //for(auto l : vl) cout<<l<<" ";
    //cout<<endl;

    if(vl.size()!=0)
    for(int i = 0;i<vl.size();i++){
        for(int j = 1;j <= n-2-vl[i]+1 ;j++ )
            if (getHash(j,j+vl[i]-1)==getHash(0,vl[i]-1)){
                cout<<s.substr(0,vl[i]);
                return 0;
            }
    }

    cout<<"Just a legend"<<endl;

}

