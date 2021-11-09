//
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//12
//13
//14
//15
//16
//17
//18
//19
//20
//21
//22
//23
//24
//25
//26
//27
//28
//29
//30
//31
//32
//33
//34
//35
//36
//37
//38
//39
//40
//41
//42
//43
//44
//45
//46
//47
//string s;
//int dp[2005][2005];
//
//void trace(int l, int r) {
//    if (l == r) {
//        cout << s[l];
//        return;
//    }
//
//    if (s[l] == s[r]) {
//        cout << s[l];
//        trace(l+1,r-1);
//        cout << s[r];
//        return;
//    }
//
//    if (dp[l][r] == dp[l+1][r]) trace(l+1,r);
//    else trace(l,r-1);
//}
//
//int main() {
//
//    ios::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//
//    // init
//    cin >> s;
//    int n = sz(s);
//
//    // dp
//    for(int len = 1; len <= n; len++)
//        for(int l = 0; l < n - len + 1; l++) {
//            int r = l + len - 1;
//
//            // corner cases
//            if (len == 1) { dp[l][r] = 1; continue; }
//            if (len == 2) { dp[l][r] = 1 + (s[l] == s[r]); continue; }
//
//            dp[l][r] = max(dp[l+1][r], dp[l][r-1]);
//            if (s[l] == s[r]) dp[l][r] = max(dp[l][r], 2 + dp[l+1][r-1]);
//        }
//
//    // trace
//    trace(0, n-1);
//
//    return 0;
//}






#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{
    string  s; cin>>s;
    int ans=1;
    // le
    for(int i=0;i<s.size();++i)
    {
        int l=i,r=i;
        while(l>=0 && r<s.size())
        {
            if(s[l]==s[r])
            {
                ans = max(ans,r-l+1);
                l--,r++;
            }
            else break;
        }
    }
    for(int i=0;i<s.size();++i)
    {
        int l=i,r=i+1;
        while(l>=0 && r<s.size())
        {
            if(s[l]==s[r])
            {
                ans = max(ans, r-l+1);
                l--,r++;
            }
            else break;
        }
    }
    cout<<ans;
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


