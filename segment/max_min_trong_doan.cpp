#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;

const int MAX = 1e6;
const ll m = 14062008;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	int n,k, ans=0;
	cin >> n >> k;
	int a[n+1][n+1]{}, dp[n+1][n+1]{};
	for(int i=1; i<=n;++i){
		for(int j=1;j<=n;++j){
			cin >> a[i][j];
			dp[i][j]=a[i][j];
			dp[i][j]+=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
		}
	}
	for(int i=k;i<=n;++i){
		for(int j=k;j<=n;++j){
			int cur = dp[i][j] + dp[i-k][j-k] - dp[i-k][j] - dp[i][j-k];
			ans=max(ans,cur);
		}
	}
	cout << ans ;
}
21:38
Trịnh Đạt
Đạt đã gửi Hôm nay lúc 21:38
#include <bits/stdc++.h>
using namespace std;

int n,q;

struct node {
	int mx, mn;
}st[1<<19];

void upd(int l1, int x, int i=1, int l2 = 0, int r2=n-1){
	if(l2==r2) {
		st[i].mn=x;
		st[i].mx=x;
		return ;
	}
	int m2 =(l2+r2)>>1;
	if(l1<=m2) upd(l1,x,i*2,l2,m2);
	else upd(l1,x,i*2+1,m2+1,r2);
	st[i].mn = min(st[i*2].mn, st[i*2+1].mn);
	st[i].mx = max(st[i*2].mx, st[i*2+1].mx);
}

int get_min(int l1, int r1, int i=1, int l2=0, int r2=n-1){
	if(l1<=l2 && r2<=r1) return st[i].mn;
	int m2 = (l2+r2)>>1;
	return min((l1<=m2?get_min(l1,r1,i*2,l2,m2):100000000),
				(m2<r1?get_min(l1,r1,i*2+1,m2+1,r2):100000000));
}

int get_max(int l1, int r1, int i=1, int l2=0, int r2=n-1){
	if(l1<=l2 && r2<=r1) return st[i].mx;
	int m2 = (l2+r2)>>1;
	return max((l1<=m2?get_max(l1,r1,i*2,l2,m2):0),
				(m2<r1?get_max(l1,r1,i*2+1,m2+1,r2):0));
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> q;
	for(int i=0;i<n;++i){
		int x; cin >> x;
		upd(i,x);
	}
	while(q--){
		int a,b;
		cin >> a >> b , --a, --b;
		cout << get_max(min(a,b),max(a,b)) - get_min(min(a,b),max(a,b)) << '\n';
	}
	return 0;
}