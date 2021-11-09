#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
int s=0,smax=0;
void loang(int i,int j)
{
    s++;
    if(smax<s)
        if(smax<s) smax=s;
    if(a[i+1][j]=1 && i<n)
        loang(i+1,j);
    if(a[i-1][j]=1 && i>1)
        loang(i-1,j);
    if(a[i][j+1]=1 && j<n)
        loang(i,j+1)
    if(a[i][j-1]=1 && j>1)
        loang(i,j-1);
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

int n,m; cin>>n>>m;
for(int i=0;i<n;++i)
    for(int j=0;j<m;++j)
    cin>>a[i][j];

return 0;
}





