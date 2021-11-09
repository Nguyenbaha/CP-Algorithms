#include<bits/stdc++.h>
using namespace std;
const int   base = 2111992;
int         n,k,f[100100];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >>k;
	for (int i=1; i<k+2; i++) 
		f[i] = (i+1) % base;
	for (int i=k+2; i<=n; i++) 
		f[i] = (f[i-k-1] % base + f[i-1] % base) % base;
	cout <<f[n];
}