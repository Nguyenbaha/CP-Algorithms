#include <bits/stdc++.h>
#define ll int64_t
#define ff first
#define ss second
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
using namespace std;

constexpr int mod = 1e9+7;

void solution()
{
    int n, j=0, r = INT_MAX, k, ans=0;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a) cin >> i;
	sort(all(a));
	for(auto i:a){
		if(i<0){
			if(ans!=0){
				r = min(r,abs(k-i));
			}
			ans++;
		}
		else if(i==0){
			j++;
			ans++;
		}
		else {
			if(j<=1 && r>=i)
				ans++;
			break;
		}
		k=i;
	}
	cout << (ans==0?1:ans) << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(cin.failbit);
    srand(time(NULL));
    int t;
    cin >> t;
    while(t--)
        solution();
    return 0;
}



