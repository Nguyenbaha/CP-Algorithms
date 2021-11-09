#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁

void Never_give_up()

{


     map<int,int>mark;
    int n;
    cin>>n;
    int ans=1;
    mark[n]=1;
    while(1){
        n++;
        while(n%10==0){
            n/=10;
        }
        if(mark[n]!=0){
            break;
        }
        mark[n]=1;
        ans++;
    }
    cout<<ans<<endl;
}

signed main() {
ios::sync_with_stdio(false);
cin.tie(0);


Never_give_up();


 return 0;
}


