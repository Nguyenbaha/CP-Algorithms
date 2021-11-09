//#include <bits/stdc++.h>
//
//#define MOD 1000000007
//
//using namespace std;
//
//int main(){
//	int N; cin >> N;
//
//	int dp[N]; // Number of ways to reach (i-1)th floor
//	memset(dp, 0, sizeof dp);
//	dp[0] = 1;
//	dp[1] = MOD - 1;
//
//	vector<int> a;
//	for(int i = 0; i < N; i++){
//		int temp; cin >> temp;
//		a.push_back(temp);
//	}
//
//	int sum = 0;
//
//	for(int i = 0; i < N-1; i++){
//		sum = (sum + dp[i]) % MOD;
//
//		if(sum != 0){
//			if(i+1 < N){
//				dp[i+1] = (dp[i+1] + sum) % MOD;
//			}
//
//			if(i+a[i]+1 < N){
//				dp[i+a[i]+1] = (MOD + dp[i+a[i]+1] - sum) % MOD;
//			}
//		}
//	}
//
//	cout << (sum + dp[N-1]) % MOD;
//
//	return 0;
//
//}
#include<bits/stdc++.h>
typedef long long int ll;
#define mod 1000000007
using namespace std;
int main()
{
ll n;
cin>>n;
ll arr[n+5],dp[n+5],temp[n+5];
for(ll i=0;i<n;i++)
{
cin>>arr[i];
dp[i]=0;
temp[i]=0;
}
dp[0]=1;
for(ll i=0;i<n-1;i++)
{
if(i>1)
dp[i]=(dp[i]+dp[i-1])%mod;
dp[i+1]=(dp[i+1]+dp[i])%mod;
if(i+arr[i]+1<n)
dp[i+arr[i]+1]=(dp[i+arr[i]+1]-dp[i]+mod)%mod;
}
if(n>=2)
dp[n-1]=(dp[n-1]+dp[n-2])%mod;
cout << dp[n-1]<< endl;
}


