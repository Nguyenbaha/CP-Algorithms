#include <bits/stdc++.h>
 
//MY NAME IS "I_AM_BLACK" BUT I AM GREEN
 
using namespace std;
 
#define fi first
#define se second
#define fore(i,a,b) for (int i=a,ThxDem=b;i<ThxDem;i++)
#define pb push_back
#define ALL(s) s.begin(),s.end()
 
 
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    long long n, a[10005],ans=0,last;
    cin >> n;
    last=0;
    fore(i,0,n) cin >> a[i];
    fore (i,0,n) {
        last = max(a[i],last);
        if (i+1==last) ans++;
    }
 
    cout << ans;
    return 0;
}
 