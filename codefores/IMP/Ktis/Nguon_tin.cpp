#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main()
 {

     ll n,k;
     cin>>n>>k;
     ll a = (k-1)/2;
     ll b = n-k/2;
     cout<<min(a,b);
 }
