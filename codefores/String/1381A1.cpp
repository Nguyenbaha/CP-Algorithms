#include <bits/stdc++.h>
using namespace std;
#define int long long
#define prec(n) fixed<<setprecision(n)
#define bye cout<<endl;return
const int N = 2e5+5 ;

#define fi first
#define se second
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define ALL(s) s.begin(),s.end()
 const int mod= 1e9+7;
 
int fpow(int a, int n){
    if (n==0) return 1;
    if (n%2==1) return (a*fpow(a*a%mod,n/2))%mod;
    else return fpow(a*a%mod,n/2);
}
typedef unsigned long long ull;
int T;


// Here


void unstoppable()
{
   string s,t;
      cin>> s>> t;
            long long s1=s.size(),k,i,k1,ar[100]={0},ar1[100]={0},t1;
            t1=t.size();
            for(i=0;i<s1;i++)
            {
                  k=s[i]-'a';
                  ar[k]++;
            }
            for(i=0;i<t1;i++)
            {
                  ar1[t[i]-'a']++;
            }
            for(i=0;i<26;i++)
            {
                  //cout<<ar[i]<<" "<<ar1[i]<<endl;
                  if(ar1[i]>ar[i])
                  {
                        cout<<"need tree"<<endl;
                        return ;
                  }
            }
            k1=0;
            for(i=0;i<s1;i++)
            {
                  if(s[i]==t[k1])
                  {
                        k1++;
                  }
            }
            if(k1==t1)
            {
                  cout<<"automaton"<<endl;
                  return ;
            }
            if(s1!=t1)
            {
                  cout<<"both"<<endl;
            }
            else
                  cout<<"array"<<endl;
      }


signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> T;
    while(T--)
{
    unstoppable();
 }


}

