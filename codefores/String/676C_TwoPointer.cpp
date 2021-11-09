
#include <bits/stdc++.h>
using namespace std;

 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
int T=1;

template <typename T> void print(vector <T> v) {
    for(int i = 0; i < v.size(); ++i)
        cout << v[i] << " \n"[i + 1 == v.size()];
}

// Here
bool ok( )
{

}
//here
    string s;
    int n,k;
void sol()
{
   cin>>n;
   cin>>k;
   cin>>s;
   int ans = 1;
   vector<int> a,b;
   for(int i=0;i<n;++i)
   {
       if(s[i] == 'a')
        a.push_back(i);
       else b.push_back(i);
   }
   int last = 0;
   int cnt  = 0;
//   for(int i=0;i<n;++i)
//   {
//       if(s[i] == 'a')
//        {
//            cnt++;
//        }
//        while( cnt > k &&  last <= i)
//            if(s[last++] =='a')
//            cnt--;
//        ans  = max(ans,i-last+1);
//   }
//   last = 0;
//   cnt = 0;
   for(int i=0;i<n;++i)
   {
       if(s[i] == 'b')
        {
            cnt++;
        }
       // cout<<"Case: "<<i<<endl;
        while(cnt > k && last <= i)
          {
              //cout<<"While:last "<<last<<endl;
              if(s[last++] == 'b') cnt --;
          }
         // cout<<"last out :"<<last<<endl;
        ans = max(ans,i-last+1);
        //cout<<"Ans: "<<ans<<endl;
        // aabaabaa
   }
   cout<<ans;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //cin >> T;
    while(T--)
{
    sol();
 }


}

