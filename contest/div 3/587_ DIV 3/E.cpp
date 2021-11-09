#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
     ll t,k;
     scanf("%lld",&t);
     while(t--){
     ll len=0;// represents the maximum number of digits of the current
     ll cnt=1;// mark, every ride 10, len ++
     ll Len=0;// each sequence length increases (1,2,3 ...)
     scanf("%lld",&k);
     k--;// to here - because after the index into a string of characters starting with 0
     for(ll i=1;;i++)// i represents the current maximum number of
     {
         if(i==cnt){
            //cout<<"ha"<<i<<endl;
            len++;
            cnt*=10;
         }
         Len+=len;
         if(k>=Len) k-=Len;// When k is larger than the current increase in the length of the sequence minus
         else{// If the length of the sequence than the current increase is small, the answer proved between 1-i, the same method can be traversed to find
            cnt=1;
            len=0;
            //cout<<k<<endl;
            for(ll j=1;j<=i;j++){
                if(j==cnt){
                    len++;
                    cnt*=10;
                }
                if(k>=len) k-=len;
                else{
                    printf("%c\n",to_string(j)[k]);
                   // cout<<i;
                    break;
                }
            }
           break;
         }
     }
  }
  return 0;
}