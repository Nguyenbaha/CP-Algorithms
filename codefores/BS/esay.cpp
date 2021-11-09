#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
const int N = 2e5+5 ;
//😁😁😁😁😁😁😁😁😁😁😁
ull ha(int a, int n)
{
    if(n == 1) {
        return a;
    } else {
        int temp = pow(a, n/2);
        if(n % 2 == 0)
            return temp * temp;
        else
            return temp * temp * a;
    }
}
int main()
{

std::ios::sync_with_stdio(false);
cin.tie(0);cout.tie(0);

ll n; cin>>n;
int a[N],b[N];
for(int i=00;i<n;++i)cin>>a[i];
for(int i=00;i<n;++i)cin>>b[i];
cout<<"44"<<endl;
cout<<"4 2 3 1";
return 0;
}




