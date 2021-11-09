#include <bits/stdc++.h>
using namespace std;

 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <int> a(n), b(m),c;
    for(auto &e: a)
    	cin >> e;
    for(auto &e: b)
    	cin >> e;
    int i=0, j=0;
    while(i < n || j < m)
    {
    	if(a[i] <= b[j] && i < n || j== m)
    		c.push_back(a[i++]);
    	else
    		c.push_back(b[j++]);
    }
    for(auto &e: c)
    	cout << e<<' ';
}