#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1e6+5 ;




typedef unsigned long long ull;
int T=1;


// Here

int pr[N];
vector<int> ispr;
void snt(int l, int r)
{
    pr[0]=pr[1]=1;
    for(int i=2;i*i<=N;++i)
    {
        if(!pr[i])
            for(int j=i*i;j<N;j+=i)
                pr[j]=1;
    }
 
    for(int i=l;i<=r;++i)
        if(!pr[i]) ispr.push_back(i);
 
}
vector<int> tmp;
void ggt(int n)
 {
       int A[1000006],i,j,m=1;
      long long r=0,q;
      A[0]=1;
      for(i=2;i<=n;i++){
      for(j=0;j<m;j++){
           q=r;
           r=(A[j]*i+r)/10;
          A[j]=(A[j]*i+q)%10;
   }
     while(r>0){
          A[m]=r%10;
          m++;
          r=r/10;
   }
 }
        for(i=m-1;i>=0;i--)  
            tmp.push_back(A[i]);

}

void unstoppable()
{
  
   /* int u,v;
    cin >> u,v;
    snt(u,v);
    int res = ispr.size();
    int ans = u-v+1-res;*/
    int ans;
    cin >> ans;
    
    ggt(ans);
    for(auto e: tmp)
        cout <<e;
}

 
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(T--)
{
    unstoppable();
 }


}
