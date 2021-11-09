#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
void ha()
{
int a[N];
int n; cin>>n;
for(int i=0;i<n;++i)cin>>a[i];
sort(a, a+n);
    int res = 1, j = 1;
    for (int i = n-1; i >= 0; i--)
    {
        a[i] += j++;
        if (res < a[i])
            res = a[i];
    }
    res++;
    printf("%d", res);
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ha();
return 0;
}




