#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
 #define prec(n) fixed<<setprecision(n)
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
// @ by HaNguyen -- 2020---
//here

void sol()
{

        ll n, i;
        cin>>n;
        ll arr[n+1];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        arr[n] = 0;
        for(i=n-1;i>=0;i--){
            arr[i] += arr[min(n,i+arr[i])];
        }
        cout<<*max_element(arr,arr+n)<<endl;;
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

 return 0;
}
