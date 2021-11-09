
#include<stdio.h>
#include<vector>
#define MAX   22
using namespace std;
int a[MAX];
bool f[5005];
vector<int> v;
int n,c,i,j,s,r;
int main(void) {
	scanf("%d",&c);
	scanf("%d",&n);
	for (i=1;i<=n;i=i+1) scanf("%d",&a[i]);
	v.clear();
	for (i=1;i<=5000;i=i+1) f[i]=false;
	f[0]=true;
	v.push_back(0);
	for (i=1;i<=n;i=i+1) {
		s=v.size();
		for (j=0;j<s;j=j+1) {
			if (v[j]+a[i]>c) continue;
			if (!f[v[j]+a[i]]) {
				f[v[j]+a[i]]=true;
				v.push_back(v[j]+a[i]);
			}
		}
	}
	r=0;
	for (i=0;i<v.size();i=i+1)
		if ((v[i]<=c) && (v[i]>r)) r=v[i];
	printf("%d",r);
	return 0;
}
