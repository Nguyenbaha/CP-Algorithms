#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020

void Never_give_up()

{
//    int n;
//    cin>>n;
//    if(n<10)
//        cout<<n<<endl;
//    else if(n>45)
//        cout<<-1<<endl;
//    else
//    {
//        string ans  = "";
//        for(int i=9;i>=1;--i)
//        {
//            if(n-i >= 0)
//            {   ans += i +'0';
//                n-=i;
//            }
//        }
//        reverse(ans.begin(),ans.end());
//        cout<<ans<<endl;
//    }
    int n; cin>>n;
    vector<int> ans;
    for(int i=1;i<(1<<10);++i)
    {
        int num =  0, sum =0;
        for(int j=1;j<10;++j)
            if((i>>j)&1)
        {
            sum += j;
            num = num*10 + j;
        }
        if(sum-n ==0)
            ans.push_back(num);
    }
    if(ans.size()<1)
        cout<<-1<<endl;
    else{

        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
    }
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);

int tc;
cin >> tc;
while(tc--)
{
Never_give_up();
 }

 return 0;
}

