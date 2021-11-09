#include <bits/stdc++.h>
using namespace std;

int cal( int x1, int y1, int x2, int y2)
{
	if(x1 == y1)
		return min(x2 - x1, y2 - y1);
	if(x1 > y1)
	{
		if(y2 < x1)
			return 0;
		return min(x2-x1+1, y2-x1+1);
	}
	if(x1 < y1)
	{
		if(x2 < y1)
			return 0;
		return min(x2-y1+1, y2-y1+1);
	}
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair <int,int > > v;
    v.push_back({0,0});
    for(int i=1; i <= n; ++i)
    {
    	int l,r;
    	cin >> l >> r;
    	v.push_back({l,r});
    }
    int ans =1 ;
    for(int i=1; i <= n; ++i)
    {
    	ans += cal(v[i-1].first, v[i-1].second, v[i].first, v[i].second);
    }
    cout <<ans;
}